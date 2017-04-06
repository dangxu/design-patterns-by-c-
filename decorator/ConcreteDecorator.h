#pragma once
#include "decorator.h"

//装饰实现
class ConcreteDecorator : public Decorator
{
public:
	ConcreteDecorator(Component *cmp);
	virtual ~ConcreteDecorator(void);
	virtual void operation();

	//新增的功能
	void addedBehavior();
};
