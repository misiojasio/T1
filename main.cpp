#include <iostream>
#include <thread>
#include <chrono>
#include "producer.hpp"

using namespace std;

int main()
{
	Producer p;
	Producer p2("car", 425ms);
	Producer p3("house", 325ms);
	Producer p4("plane", 225ms);
	p.GoProduce();
	p2.GoProduce();
	p3.GoProduce();
	p4.GoProduce();

	return 0;
}
