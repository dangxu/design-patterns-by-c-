//Builder.cpp
#include <iostream>
#include "Builder.h"
#include "Product.h"
using namespace std;

ConcreteBuilder::ConcreteBuilder() : _product(NULL)
{
	_product = new Product();
}

ConcreteBuilder::~ConcreteBuilder()
{
	if(_product)
		delete _product;
}

void ConcreteBuilder::BuildPart()
{
    _buildPart<ProductPartA>();
    _buildPart<ProductPartB>();
    _buildPart<ProductPartC>();
}

Product* ConcreteBuilder::GetProduct()
{
	return _product;
}