#include "producer.hpp"

using namespace std;

int main()
{
	Producer p;
	Producer pp("car", 125ms);
	p.GoProduce();
	pp.GoProduce();

	return 0;
}
