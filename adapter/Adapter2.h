#ifndef _ADAPTER2_H_
#define _ADAPTER2_H_

#include "Target.h"
#include "Adaptee.h"

class Adapter2 : public Target
{
public:
	Adapter2(Adaptee *adpe);
	virtual void request();
public:
	~Adapter2(void);
private:
	Adaptee *_adpe;
};

#endif