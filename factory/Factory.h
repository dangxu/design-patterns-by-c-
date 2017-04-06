//Factory.h
#ifndef _FACTORY_H_
#define _FACTORY_H_

class Product;

class Factory
{
public:
	virtual ~Factory() = 0 {};
	virtual Product* CreateProduct() = 0;
protected:
	Factory() {};
};

/*
class ConcreteFactory:public Factory
{
public:
	ConcreteFactory();
	~ConcreteFactory();
	Product* CreateProduct();
};
*/

template <class T>
class ConcreteFactory:public Factory
{
public:
	ConcreteFactory();
	~ConcreteFactory();
	Product* CreateProduct();
};

template <class T>
ConcreteFactory<T>::ConcreteFactory()
{
	cout<<"ConcreteFactory"<<endl;
}

template <class T>
ConcreteFactory<T>::~ConcreteFactory()
{
	cout<<"~ConcreteFactory"<<endl;
}

template <class T>
Product* ConcreteFactory<T>::CreateProduct()
{
	return new T();
}

#endif //~_FACTORY_H_