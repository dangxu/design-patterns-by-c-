#include "Subject.h"
#include "Observer.h"
#include <iostream>

Subject::Subject()
{ 
	_obvs = new list<Observer*>;
}

Subject::~Subject()
{
}

void Subject::attach(Observer* obv)
{
	_obvs->push_front(obv);
}

void Subject::detach(Observer* obv)
{
	if (obv != NULL)
		_obvs->remove(obv);
}

void Subject::notify()
{
	list<Observer*>::iterator it;
	it = _obvs->begin();
	for (;it != _obvs->end();it++)
	{ 
		(*it)->update(this);
	}
}

ConcreteSubject::ConcreteSubject()
{
	_st = '\0';
}

ConcreteSubject::~ConcreteSubject()
{ }

string ConcreteSubject::getState()
{
	return _st;
}

void ConcreteSubject::setState(const string& st)
{
	_st = st;
}