all:server client

server:server.cpp
	g++ $< -o $@ -std=c++11 -lboost_system

client:client.cpp
	g++ $< -o $@ -std=c++11 -lboost_system
