//main.cpp

#include "Product.h"
#include "AbstractFactory.h"
#include <iostream>

using namespace std;

int main(int argc,char* argv[])
{
	AbstractProductA *a = NULL;
	AbstractProductB *b = NULL;
	AbstractFactory* cf1 = new ConcreteFactory1();
	a = cf1->CreateProductA();
	b = cf1->CreateProductB();
	delete a;
	delete b;
	delete cf1;

	AbstractFactory* cf2 = new ConcreteFactory2();
	a = cf2->CreateProductA();
	b = cf2->CreateProductB();
	delete a;
	delete b;
	delete cf2;
	return 0;
}