#ifndef _ABSTRACTION_H_
#define _ABSTRACTION_H_

class AbstractionImpl;

class Abstraction
{
protected:
	Abstraction(void);
public:
	virtual ~Abstraction(void);
	virtual void operation() = 0;
};


class RefindedAbstraction : public Abstraction
{
public:
	RefindedAbstraction(AbstractionImpl *impl);
	~RefindedAbstraction();
	virtual void operation();
private:
	AbstractionImpl *_impl;
};
#endif