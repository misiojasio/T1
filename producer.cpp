#include <thread>
#include <chrono>
#include "producer.hpp"

using namespace std;
using namespace std::chrono_literals;

Producer::Producer(string product, chrono::milliseconds interval) {
	this->product = product;
	this->interval = interval;
}

void Producer::startProduce() {
	while (isRunning) {
		cout << product << endl;
		this_thread::sleep_for(interval);
	}
}

void Producer::stopProduce() {
	isRunning = 0;
	cout << "Stoping production" << endl;
}
