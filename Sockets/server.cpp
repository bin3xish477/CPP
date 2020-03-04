#include <iostream>
#include <sys/types.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <string.h>
#include <string>

int main()
{
  std::cout << "Initiating Server" << std::endl;
  int soc = socket(AF_INET, SOCK_STREAM, 0);
  
  return 0;
 }
