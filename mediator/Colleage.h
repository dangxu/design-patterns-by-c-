#ifndef _COLLEAGE_H_
#define _COLLEAGE_H_
#include <string>
using namespace std;
class Mediator;

//talker
class Colleage
{
public:
	virtual ~Colleage();
	virtual void setMediator(Mediator*);
	virtual void sendMsg(string) = 0;
	virtual void getMsg(string) = 0;
protected:
	Colleage(Mediator*);
	Mediator* _mediator;
private:

};

class ConcreteColleageA : public Colleage
{
public:
	~ConcreteColleageA();
	ConcreteColleageA(Mediator*);
	virtual void sendMsg(string msg);
	virtual void getMsg(string);
protected:
private:
};

class ConcreteColleageB : public Colleage
{
public:
	~ConcreteColleageB();
	ConcreteColleageB(Mediator*);
	virtual void sendMsg(string msg);
	virtual void getMsg(string);
protected:
private:
};

#endif //~_COLLEAGE_H_