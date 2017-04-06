#pragma once
#include "component.h"

//×°ÊÎ»ùÀà
// 1.inherit from Component
class Decorator : public Component
{
public:
	Decorator(Component *cmp);
	~Decorator(void);
	virtual void operation();
protected:
	// 2.have a member of Component
	Component *_cmp;
};
