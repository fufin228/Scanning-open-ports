#include <iostream>
#include <arpa/inet.h>
#include <netdb.h>
#include <unistd.h>

bool is_port_open(const std::string &host, int port) {
    int sock = socket(AF_INET, SOCK_STREAM, 0);
    if (sock < 0) return false;

    struct sockaddr_in server_addr;
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(port);
    inet_pton(AF_INET, host.c_str(), &server_addr.sin_addr);

    bool result = connect(sock, (struct sockaddr *)&server_addr, sizeof(server_addr)) == 0;
    close(sock);
    return result;
}

int main() {
    std::string ip = "127.0.0.1";
    int start_port = 1, end_port = 1024;

    for (int port = start_port; port <= end_port; ++port) {
        if (is_port_open(ip, port)) {
            std::cout << "Port " << port << " is open.\n";
        }
    }
    return 0;
}
