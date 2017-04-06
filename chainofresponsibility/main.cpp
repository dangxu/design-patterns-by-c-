//main.cpp
#include "Handle.h"
#include <iostream>
using namespace std;

int main(int argc,char* argv[])
{
	Handle* h1 = new ConcreteHandleA();
	Handle* h2 = new ConcreteHandleB();
	Handle* h3 = new ConcreteHandleB();
	h1->setSuccessor(h2);
	h2->setSuccessor(h3);
	h1->handleRequest();
	return 0;
}