#pragma once

#include <iostream>
#include <SFML/Network.hpp>
using namespace std;



class Client : public sf::TcpSocket
{
public:
    sf::TcpSocket server;

    Client()
    {
        // default..
    }
};