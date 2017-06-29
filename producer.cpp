#include "producer.hpp"

void Producer::GoProduce(){
	for(;;){
		this_thread::sleep_for(interval);
		cout << product << endl;
	}
}
