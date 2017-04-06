//main.cpp
#include "Factory.h"
#include "Product.h"
#include <iostream>
using namespace std;

int main(int argc,char* argv[])
{
	//Factory* fac = new ConcreteFactory();
	Factory* fac = NULL;
    Product* p = NULL;
	fac = new ConcreteFactory<ConcreteProduct>();
	p = fac->CreateProduct();
	delete p;
	delete fac;

	fac = new ConcreteFactory<ConcreteProductA>();
	p = fac->CreateProduct();
	delete p;
	delete fac;
	fac = new ConcreteFactory<ConcreteProductB>();
	p = fac->CreateProduct();
	delete p;
	delete fac;
	return 0;
}