#ifndef PRODUCER_H
#define PRODUCER_H

#include "header.hpp"

class Producer {

	string product;
	std::chrono::milliseconds interval;
	thread first;

public:

	Producer(string product = "box", std::chrono::milliseconds interval = 666ms) {
		this->product=product;
		this->interval=interval;

		first = thread(&Producer::GoProduce, this);
	}
	void GoProduce();
	void StopProduce();
};

#endif
