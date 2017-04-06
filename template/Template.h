#ifndef _TEMPLATE_H_
#define _TEMPLATE_H_

class AbstractClass
{
public:
	virtual ~AbstractClass();
	//algorithm interface
	void templateMethod();
protected:
	// algorithm implement
	virtual void primitiveOperation1() = 0;
	virtual void primitiveOperation2() = 0;
	AbstractClass();
private:
};

class ConcreteClass1:public AbstractClass
{
public:
	ConcreteClass1();
	~ConcreteClass1();
protected:
	// algorithm implement details
	void primitiveOperation1();
	void primitiveOperation2();
private:
};

class ConcreteClass2:public AbstractClass
{
public:
	ConcreteClass2();
	~ConcreteClass2();
protected:
	// algorithm implement details
	void primitiveOperation1();
	void primitiveOperation2();
private:
};

#endif