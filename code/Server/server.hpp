#include <iostream>
#include <vector>
#include <thread>
#include <SFML/Network.hpp>

#define PORT        53000
#define VISIBILITY  true

class Server
{
public:
    unsigned short port;
    bool isOpen;

private:
    std::vector<std::unique_ptr<sf::TcpSocket>> clients;
    sf::SocketSelector selector;
    sf::TcpListener listener;

public:
    Server(unsigned short port=PORT, bool isOpen=VISIBILITY)
    {
        this->port = port;
        this->isOpen = isOpen;
    }

    void run()
    {
        this->onServerReady();

        std::thread thread(&Server::connectClients, this);
        thread.join();
    }

    void shuttdown()
    {
        
    }

    void connectClient(std::unique_ptr<sf::TcpSocket> client)
    {         
        this->onClientConnect(*client.get());
        this->selector.add(*client.get());
        clients.push_back(std::move(client));
    }

    void disconnectClient(sf::TcpSocket &client)
    {
        this->onClientDisconnect(client);
    }

private:
    void connectClients()
    {
        if (this->listener.listen(this->port) != sf::Socket::Done)
            { std::cout << "An error occured while listening to port " << this->port << std::endl; return; }

        while (this->isOpen)
        {
            auto newClient = std::make_unique<sf::TcpSocket>();

            if (listener.accept(*newClient) != sf::Socket::Done)
            { 
                std::cout << "An error occured while accepting the client" << std::endl;
            }
            else connectClient(std::move(newClient));   
        }
        this->listener.close();
    }

    void ManagePackets()
    {
        
        
    }
protected:
    virtual void onServerReady(){};
    virtual void onServerShutdown(){};
    virtual void onClientConnect(sf::TcpSocket& client){};
    virtual void onClientDisconnect(sf::TcpSocket& client){};
    virtual void onPacketReceived(sf::TcpSocket& client, sf::Packet &packet){};
};