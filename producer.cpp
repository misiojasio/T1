#include <thread>
#include <chrono>
#include "producer.hpp"

using namespace std;
using namespace std::chrono_literals;

Producer::Producer(string products, chrono::milliseconds interval) {
	this->products = products;
	this->interval = interval;

	first = thread(&Producer::productLine, this);
	first.join();
}

void Producer::productLine() {
		this_thread::sleep_for(interval);
		cout << products << endl;
}
