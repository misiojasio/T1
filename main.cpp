#include <iostream>
#include <thread>
#include <chrono>
#include "producer.hpp"

using namespace std;

int main()
{
	cout << "Begin" << endl;
	//Producer p(); //temporarily disabled
	cout << "1" << endl;
	Producer p2("car", 425ms);
	cout << "1" << endl;
	Producer p3("house", 325ms);
	cout << "1" << endl;
	Producer p4("plane", 225ms);
	cout << "End" << endl;

	return 0;
}
