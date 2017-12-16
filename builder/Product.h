//Product.h
#ifndef _PRODUCT_H_
#define _PRODUCT_H_

#include <iostream>
#include <list>

class ProductPart
{
public:
	ProductPart() {};
	virtual ~ProductPart() {};
protected:
private:
};

class Product
{
public:
	Product();
	virtual ~Product();
	void addProducePart(ProductPart* part);
protected:
private:
    std::list<ProductPart*> _productPartList;
};

class ProductPartA : public ProductPart  
{  
public:  
    ProductPartA()  
    {  
		std::cout << "build ProductPartA" << std::endl;  
    }  
    virtual ~ProductPartA() {}
};  
  
class ProductPartB : public ProductPart  
{  
public:  
    ProductPartB()  
    {  
        std::cout << "build ProductPartB" << std::endl;  
    }  
    virtual ~ProductPartB() {}
};  
  
class ProductPartC : public ProductPart  
{  
public:  
    ProductPartC()  
    {  
        std::cout << "build ProductPartC" << std::endl;  
    }  
    virtual ~ProductPartC() {}
}; 

#endif //~_PRODUCT_H_