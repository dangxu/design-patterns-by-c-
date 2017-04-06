//Product.cpp
#include "Product.h"
#include <iostream>
using namespace std;

Product::Product()
{
}

Product::~Product()
{
}

ConcreteProduct::ConcreteProduct()
{
	cout<<"ConcreteProduct"<<endl;
}

ConcreteProduct::~ConcreteProduct()
{
	cout<<"~ConcreteProduct"<<endl;
}

ConcreteProductA::ConcreteProductA()
{
	cout<<"ConcreteProductA"<<endl;
}

ConcreteProductA::~ConcreteProductA()
{
	cout<<"~ConcreteProductA"<<endl;
}

ConcreteProductB::ConcreteProductB()
{
	cout<<"ConcreteProductB"<<endl;
}

ConcreteProductB::~ConcreteProductB()
{
	cout<<"~ConcreteProductB"<<endl;
}