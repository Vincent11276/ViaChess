#pragma once

#include <iostream>
#include <vector>
#include <map>

#include <SFML/Network.hpp>


#define MAX_CLIENT_COUNT    5
#define PORT_NUMBER         53000


class Server
{
public:

    Server()
    {
        // default..
    }

    void run()
    {
        while (true)
        {
            this->checkForConnectionRequest();

        }
    } 

    void setPort(unsigned short value)
    {
        if (value < 65353)
        {
            this->port = value;

            std::cout << "Port number was changed to " << value << std::endl;
        }
        else std::cout << "Invalid port number: " << value << std::endl;      
    }

    unsigned short getPort()
    {
        return port;
    }

    int getClientCount()
    {
        return this->connections.size();
    }

    sf::TcpSocket* getClient(sf::IpAddress& ipAddr)
    {
        return this->connections[ipAddr];
    }

    std::vector<sf::TcpSocket*> getAllClients()
    {
        std::vector<sf::TcpSocket*> clients;

        for (auto &conn: this->connections)
        {
            clients.push_back(conn.second);
        }
        return clients;
    }

    std::vector<sf::IpAddress> &getAllAddresses()
    {
        std::vector<sf::IpAddress> addresses;

        for (auto &conn: this->connections)
        {
            addresses.push_back(conn.first);
        }
        return addresses;
    }

    void sendPacket(sf::IpAddress &ipAddr, sf::Packet &packet)
    {
        this->getClient(ipAddr)->send(packet);
    }

    void broadcastPacket(sf::Packet &packet)
    {
        for (auto &client: connections)
        {
            if (client.second->send(packet) != sf::Socket::Done)
            {
                std::cerr << "Failed to send packet to the following address: " << client.first; 
            }
        }
        std::cout << "Sucessfully sent the packet to all clients" << std::endl;
    }

    std::size_t broadcastRawData(void* data)
    {
        std::size_t bytesReceived;

        for (auto &conn: connections)
        {
            sf::TcpSocket* client = conn.second;

            if (client->send(data, sizeof(data), bytesReceived) != sf::Socket::Done)
            {
                std::cerr << "Failed to send packet to the address: " << client->getRemoteAddress(); 
            }
        }
        std::cout << "Sucessfully sent packet to all clients" << std::endl;

        return bytesReceived;
    }


    sf::Packet &getLastPacketReceived()
    {
        return lastPacketReceived;
    }

    sf::Socket::Status receivePacket(sf::Time timeout=sf::Time::Zero, bool blocking=false)
    {
        sf::SocketSelector selector;

        std::vector<sf::TcpSocket*> clients = getAllClients();

        if (selector.wait(timeout))
        {
            for (auto &client: clients)
            {
                return client->receive(lastPacketReceived);       
            }
        }
        else return sf::Socket::NotReady;
    }

    bool checkForConnectionRequest(bool blocking=false)
    {
        sf::TcpListener listener;      
        listener.setBlocking(blocking);

        if (listener.listen(this->port) == sf::Socket::Done)
        {
            sf::TcpSocket newClient;

            if (listener.accept(newClient) == sf::Socket::Done)
            {
                std::cout << "New connection received from " << newClient.getRemoteAddress() << std::endl;

                addClient(newClient);

                return true;
            }
        }
        return false;
    }

    void addClient(sf::TcpSocket& client)
    {
        std::cout << "Sucessfully added " << client.getRemoteAddress() << " to the server" << std::endl;

        this->connections.emplace(client.getRemoteAddress(), &client);
    }

    void removeClient(sf::IpAddress &ipAddr)
    {
        std::cout << "Sucessfully removed " << ipAddr << " to the server" << std::endl;

        connections.erase(ipAddr);
    }

    void addToBlackList(sf::IpAddress& ipAddr)
    {
        std::cout << "Sucessfully added " << ipAddr << " to black list" << std::endl;

        blackList.push_back(ipAddr);
    }

    std::vector<sf::IpAddress>& getBlackList()
    {
        return blackList;
    }

private:
    unsigned short port = PORT_NUMBER;

    unsigned int maxClientCount = MAX_CLIENT_COUNT;

    sf::Packet lastPacketReceived;

    std::vector<sf::IpAddress> blackList;

    std::map<sf::IpAddress, sf::TcpSocket*> connections;
};