#include <stdio.h>
#include <iostream>
#include <boost/asio.hpp>

using namespace boost::asio;

void on_connect(const boost::system::error_code &err)
{
   if ( err )
   {
      printf("err =%d\n", err);
   }
}

int main(int argc, char *argv[])
{
     auto ip = ip::address::from_string("0.0.0.0");
     int  port =8080;

     io_service io;

     auto ep = ip::tcp::endpoint(ip, port);

     std::cout<<ip<<std::endl;

     ip::tcp::socket client(io);

     client.async_connect(ep, on_connect);

     io.run();

}
