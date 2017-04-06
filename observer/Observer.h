#ifndef _OBSERVER_H_
#define _OBSERVER_H_

#include <string>
#include <list>
using namespace std;

class Subject;

class Observer
{
public:
	~Observer();
	// to update myself, because of subject changed.
	virtual void update(Subject*)=0;
protected:
	Observer();
private:
};

//detail observer
class ConcreteObserverA : public Observer
{
public:
	ConcreteObserverA();
	~ConcreteObserverA();
	virtual void update(Subject*);
protected:
private:
	string _st;
};

//detail observer
class ConcreteObserverB : public Observer
{
public:
	ConcreteObserverB();
	~ConcreteObserverB();
	virtual void update(Subject*);
protected:
private:
	string _st;
};

#endif