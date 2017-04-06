//Mediator.h
#ifndef _MEDIATOR_H_
#define _MEDIATOR_H_
#include <string>
using namespace std;

class Colleage;
//communicator
class Mediator
{
public:
	virtual ~Mediator();
	virtual void sendMsg(string,Colleage*from) = 0;
protected:
	Mediator();
private:
};

class ConcreteMediator : public Mediator
{
public:
	ConcreteMediator();
	~ConcreteMediator();
	void setColleageA(Colleage*);
	void setColleageB(Colleage*);
	virtual void sendMsg(string msg,Colleage*from);
protected:
private:
	Colleage* m_ColleageA;
	Colleage* m_ColleageB;
};

#endif //~_MEDIATOR_H