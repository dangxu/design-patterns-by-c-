//Director.h
#ifndef _DIRECTOR_H_
#define _DIRECTOR_H_

class Product;
class Builder;
class Director
{
public:
	Director(Builder* hld);
	~Director();
	void Construct();
    Product* GetProduct();

protected:
private:
	Builder* _bld;
};

#endif  //~_DIRECTOR_H_