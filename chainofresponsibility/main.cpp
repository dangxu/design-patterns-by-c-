//main.cpp
#include "Handle.h"
#include <iostream>
using namespace std;

int main(int argc,char* argv[])
{
	Handle* h1 = new ConcreteHandleA();
	Handle* h2 = new ConcreteHandleB();
	Handle* h3 = new ConcreteHandleB();
	h1->setHandler  (h2);
	h2->setHandler  (h3);
	h1->handleRequest();
	delete h1;
	delete h2;
	delete h3;
	return 0;
}