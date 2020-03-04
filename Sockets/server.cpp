#include <iostream>


int main()
{
  std::cout << "Initiating Server" << std::endl;
  int soc = socket(AF_INET, SOCK_STREAM, 0);
  
  return 0;
 }
