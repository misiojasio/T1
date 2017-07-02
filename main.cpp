#include <iostream>
#include <thread>
#include <chrono>
#include "producer.hpp"

using namespace std;
using namespace std::chrono_literals;

int main()
{
	cout << "Begin of main" << endl;
	cout << "1" << endl;
	thread t1(&Producer::startProduce, Producer());
	cout << "2" << endl;
	t1.detach();
	cout << "3" << endl;
	this_thread::sleep_for(5s);
	cout << "4" << endl;
	Producer stop;
	stop.stopProduce();
	cout << "End of main" << endl;
	return 0;
}
