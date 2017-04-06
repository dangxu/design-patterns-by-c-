#ifndef _ADAPTER_H_
#define _ADAPTER_H_

#include "target.h"
#include "Adaptee.h"

//class Adapter : public Target, public Adaptee
class Adapter : public Target, private Adaptee
{
public:
	Adapter(void);
	virtual void request();
public:
	~Adapter(void);
};

#endif