#include <iostream>
#include <fstream>
#include <string>
#include <winsock2.h>
#include <ws2tcpip.h>

#pragma comment(lib, "ws2_32.lib")

using namespace std;

int main()
{
    WSADATA wsaData;
    if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0) {
        cout << "Failed to initialize winsock." << endl;
        return 1;
    }

    char hostName[256];
    char ip[256];

    if (gethostname(hostName, sizeof(hostName)) == -1) {
        cout << "Failed to get hostname." << endl;
        return 1;
    }

    struct addrinfo* result = nullptr;
    if (getaddrinfo(hostName, nullptr, nullptr, &result) != 0) {
        cout << "Failed to get host information." << endl;
        return 1;
    }

    // Retrieve the IP address from the first entry in the result linked list
    inet_ntop(AF_INET, &reinterpret_cast<struct sockaddr_in*>(result->ai_addr)->sin_addr, ip, sizeof(ip));

    freeaddrinfo(result);

    ofstream myfile("ip.txt");
    if (myfile.is_open()) {
        myfile << ip;
        myfile.close();
        cout << "IP address saved to ip.txt." << endl;
    } else {
        cout << "Failed to open ip.txt for writing." << endl;
        return 1;
    }

    WSACleanup();

    return 0;
}