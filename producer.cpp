#include <thread>
#include <chrono>
#include "producer.hpp"

using namespace std;
using namespace std::chrono_literals;

Producer::Producer(string product, std::chrono::milliseconds interval) {
	this->product = product;
	this->interval = interval;

	first = thread(&Producer::GoProduce, this);
}

void Producer::GoProduce(){
	for(;;){
		this_thread::sleep_for(interval);
		cout << product << endl;
	}
}
