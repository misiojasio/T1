#include <chrono>
#include "producer.hpp"
#include <thread>

using namespace std;
using namespace std::chrono_literals;

Producer::Producer(string product, chrono::milliseconds interval) {
	this->product = product;
	this->interval = interval;

	pTh = thread(&Producer::productLine, this);
}

Producer::~Producer() {
	pTh.join();
}

void Producer::productLine() {
	while (isRunning) {
		cout << product << endl;
		this_thread::sleep_for(interval);
	}
}

void Producer::stopProduce() {
	isRunning = false;
	cout << "Stopping production" << endl;
}
