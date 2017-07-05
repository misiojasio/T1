#ifndef PRODUCER_H
#define PRODUCER_H

#include <iostream>
#include <chrono>
#include <thread>

class Producer {

	std::string product;
	std::chrono::milliseconds interval;
	std::thread first;
	bool isRunning;

	void productLine();

public:

	Producer(std::string product = "box", std::chrono::milliseconds interval = std::chrono::milliseconds(404));

	void startProduce();
	void stopProduce();
};

#endif
