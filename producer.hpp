#ifndef PRODUCER_H
#define PRODUCER_H

#include <iostream>
#include <chrono>
#include <thread>

class Producer {

	std::string products;
	std::chrono::milliseconds interval;
	std::thread first;

public:
	//Producer(std::string product = "box", std::chrono::milliseconds(666)); 
	//Przy takim zapisie std::chrono (zgodnie z sugestią w komentarzu) i kilku innych 
	//wariacjach tego zapisu nie działa
	//błąd kompilacj: could not convert ‘666’ from ‘int’ to ‘std::chrono::milliseconds 
	//i nie wiem jak zmusić to do działania zachowując zadeklarowane wartości domyśle 

	Producer(std::string products, std::chrono::milliseconds);

	void productLine();
	void startProduce();
	void stopProduce();
};

#endif
