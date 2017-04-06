#ifndef _ABSTRACTIONIMPL_H_
#define _ABSTRACTIONIMPL_H_

class AbstractionImpl
{
protected:
	AbstractionImpl(void);
public:
	virtual ~AbstractionImpl(void);
	virtual void operation() = 0;
};

class ConcreteAbstractionImplA : public AbstractionImpl
{
public:
	ConcreteAbstractionImplA();
	~ConcreteAbstractionImplA();
	virtual void operation();
};

class ConcreteBbstractionImplB : public AbstractionImpl
{
public:
	ConcreteBbstractionImplB();
	~ConcreteBbstractionImplB();
	virtual void operation();

};

#endif
