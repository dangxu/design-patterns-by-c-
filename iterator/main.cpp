//main.cpp
#include "Iterator.h"
#include "Aggregate.h"
#include <iostream>
using namespace std;

int main(int argc,char* argv[])
{
	Aggregate* ag = new ConcreteAggregate();
	Iterator* it = new ConcreteIterator(ag);
	for (; !(it->isDone()) ; it->next())
	{
		cout<<it->currentItem()<<endl;
	}
	delete it;
	delete ag;
	return 0;
}