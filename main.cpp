/*
kompilowane przy uzyciu:

g++ -std=c++11 -Wall -pthread

*/


#include <iostream>
#include <thread>

using namespace std;


class Producer {

	string product; 
	int interval;

public:

	Producer(string product = "box", int interval = 666) {
		this -> product = product;
		this -> interval = interval;
	}

	void GoProduce();
	void StopProduce();

};


int main()
{

	thread first(&Producer::GoProduce, Producer());
	first.join();


	return 0;

}

void Producer::GoProduce(){
	for(;;){
		this_thread::sleep_for(chrono::milliseconds(interval));
		cout << product << endl;
	}
}



/*

//Wersja 2 ale bez wątków nie wiem jak je tu ogarnąć

#include <iostream>
#include <thread>

using namespace std;


class Producer {

	string product; 
	int interval;

public:

	Producer(string product = "box", int interval = 666) {
		this -> product = product;
		this -> interval = interval;
	}

	void GoProduce();

};


int main()
{

	Producer *p1 = new Producer();
	Producer *p2 = new Producer("Szafa", 521);
	Producer *p3 = new Producer("Koc", 123);

	p1 -> GoProduce();
	p2 -> GoProduce();
	p3 -> GoProduce();

	delete p1; 
	delete p2; 
	delete p3; 

	return 0;

}

void Producer::GoProduce(){
	for(;;){
		this_thread::sleep_for(chrono::milliseconds(interval));
		cout << product << endl;
	}
}
*/