#ifndef _UNSHAREDCONCRETEFLYWEIGHT_H_
#define _UNSHAREDCONCRETEFLYWEIGHT_H_

#include "Flyweight.h"

class UnsharedConcreteFlyweight : public Flyweight
{
public:
	UnsharedConcreteFlyweight(const string state);
	virtual ~UnsharedConcreteFlyweight(void);
	virtual void operation(const string &extrinsicState);
};

#endif