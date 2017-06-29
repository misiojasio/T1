#ifndef PRODUCER_H
#define PRODUCER_H

#include <iostream>
#include <chrono>
#include <thread>

using namespace std::chrono_literals;

class Producer {

	std::string product;
	std::chrono::milliseconds interval;
	std::thread first;

public:

	Producer(std::string product = "box", std::chrono::milliseconds interval = 666ms);

	void GoProduce();
	void StopProduce();
};

#endif
