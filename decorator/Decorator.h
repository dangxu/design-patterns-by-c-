#pragma once
#include "component.h"

// Decorator inherit original interface from Component
class Decorator : public Component
{
public:
	Decorator(Component *cmp);
	~Decorator(void);
	virtual void operation();//inherit original interface
protected:
	Component *_cmp;//which object to be decorated
};
