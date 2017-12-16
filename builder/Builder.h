//Builder.h
#ifndef _BUILDER_H
#define _BUILDER_H

#include <string>
using namespace std;

class Product;
class Builder
{
public:
	virtual ~Builder() {};
	virtual void BuildPart()=0;
	virtual Product* GetProduct()=0;

protected:
	Builder() {};
private:
};

class ConcreteBuilder: public Builder
{
public:
	ConcreteBuilder();
	~ConcreteBuilder();
	void BuildPart();
	Product* GetProduct();

protected:
    template<typename T>  
    void _buildPart()  
    {  
        ProductPart* productPart = new T;
        _product->addProducePart(productPart);  
    }  
private:
    Product* _product;
};

#endif  //~_BUILDER_H