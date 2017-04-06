#ifndef _COMPONENT_H_
#define _COMPONENT_H_

class Component
{
protected:
	Component(void);
public:
	virtual ~Component(void);
public:
	// interface for leafs node 
	virtual void operation() = 0;
	// interface for branches node and empty implation for leafs node
	virtual void add(Component*);
	virtual void remove(Component*);
	virtual Component* getChild(const int index);
};

#endif
