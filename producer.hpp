#ifndef PRODUCER_H
#define PRODUCER_H

#include <atomic>
#include <chrono>
#include <iostream>
#include <thread>

class Producer {

	std::string product;
	std::chrono::milliseconds interval;
	std::thread pTh;
	std::atomic_bool isRunning;

	void productLine();

public:

	Producer(std::string product = "box", std::chrono::milliseconds interval =
	std::chrono::milliseconds(404));
	~Producer();

	void startProduce();
	void stopProduce();
};

#endif
