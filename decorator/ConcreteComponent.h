#pragma once
#include "component.h"

class ConcreteComponent : public Component
{
public:
	ConcreteComponent(void);
	~ConcreteComponent(void);
	virtual void operation();
};
