#ifndef SERVER_INCLUDES_NETS_HPP_
#define SERVER_INCLUDES_NETS_HPP_

#include <sys/socket.h>
#include <arpa/inet.h>
#include <signal.h>

class server_object{
 private:
// server socket;
    int s_sock;

 public:
    int server_socket_init();
    int server_socket_bind();
    int server_socket_listen();

    void server_socket_start();
};

#endif  // SERVER_INCLUDES_NETS_HPP_
