#pragma once
#include "decorator.h"

//װ��ʵ��
class ConcreteDecorator : public Decorator
{
public:
	ConcreteDecorator(Component *cmp);
	virtual ~ConcreteDecorator(void);
	virtual void operation();

	//�����Ĺ���
	void addedBehavior();
};
