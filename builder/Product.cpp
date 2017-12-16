//Product.cpp
#include "Product.h"
#include <iostream>
using namespace std;

Product::Product()
{
    _productPartList.clear();
}

Product::~Product()
{
    std::list<ProductPart*>::iterator it = _productPartList.begin();
    for(; it != _productPartList.end(); ++it)
    {
        if(*it)
            delete *it;
    }
}

void Product::addProducePart(ProductPart* part)
{
    _productPartList.push_back(part);  
}