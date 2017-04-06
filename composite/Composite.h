#ifndef _COMPOSITE_H_
#define _COMPOSITE_H_
#include "Component.h"
#include <vector>
using namespace std;

class Composite : public Component
{
public:
	Composite(void);
	virtual ~Composite(void);

public:
	virtual void operation();
	virtual void add(Component*);
	virtual void remove(Component*);
	virtual Component* getChild(const int index);

private:
	//保存子组件
	vector <Component *> _comVec;
};

#endif