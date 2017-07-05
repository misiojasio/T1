#include <thread>
#include <chrono>
#include "producer.hpp"

using namespace std;
using namespace std::chrono_literals;

Producer::Producer(string product, chrono::milliseconds interval) {
	this->product = product;
	this->interval = interval;

	first = thread(&Producer::productLine, this);
}

void Producer::productLine() {
	while (isRunning) {
		cout << product << endl;
		this_thread::sleep_for(interval);
	}
}
