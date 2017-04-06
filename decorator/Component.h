#ifndef _COMPONENT_H_
#define _COMPONENT_H_

class Component
{
protected:
	Component(void);
public:
	virtual ~Component(void);
	virtual void operation();
};

#endif