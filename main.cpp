#include <chrono>
#include <iostream>
#include "producer.hpp"
#include <thread>

using namespace std;
using namespace std::chrono_literals;

int main()
{
	cout << "Begin of main" << endl;
	cout << "1" << endl;
	Producer p;
	cout << "2" << endl;
	cout << "End of main" << endl;

	return 0;
}
