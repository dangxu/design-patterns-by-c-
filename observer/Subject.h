//Subject.h
#ifndef _SUBJECT_H_
#define _SUBJECT_H_
#include <list>
#include <string>
using namespace std;

class Observer;
// Subject to be observed
class Subject
{
public:
	virtual ~Subject();
	virtual void attach(Observer* obv);
	virtual void detach(Observer* obv);
	virtual void notify();
	// to change subject
	virtual void setState(const string& st) = 0;
	// to get subject
	virtual string getState() = 0;
protected:
	Subject();
private:
	list<Observer* >* _obvs;
};

class ConcreteSubject:public Subject
{
public:
	ConcreteSubject();
	~ConcreteSubject();
	string getState();
	void setState(const string& st);
protected:
private:
	string _st;
};

#endif //~_SUBJECT_H_