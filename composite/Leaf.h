#ifndef _LEAF_H_
#define _LEAF_H_
#include "Component.h"

class Leaf : public Component
{
public:
	Leaf(void);
	virtual ~Leaf(void);
	void operation();
};

#endif
