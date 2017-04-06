#include "Composite.h"
#include <iostream>
using namespace std;

Composite::Composite(void)
{
}

Composite::~Composite(void)
{
	vector<Component*>::iterator it = _comVec.begin();
	for (; it !=_comVec.end(); ++it) {
		if(!*it)
			delete *it;
	}
}

void Composite::operation()
{
	cout << "Composite::Operation" << endl;
	vector<Component*>::const_iterator it = _comVec.begin();
	for(; it != _comVec.end(); ++it) {
		(*it)->operation();
	}
}

void Composite::add(Component* cmp)
{
	_comVec.push_back(cmp);
}

void Composite::remove(Component* cmp)
{
	vector<Component*>::iterator it = _comVec.begin();
	for (; it !=_comVec.end();) {
		if (*it == cmp) {
		    it = _comVec.erase(it);
		}
		else {
			++it;
		}
	}
}

Component* Composite::getChild(const int index)
{
	return _comVec[index];
}