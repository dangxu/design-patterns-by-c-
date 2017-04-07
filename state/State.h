//state.h
#ifndef _STATE_H_
#define _STATE_H_

class StateMachine;
class State
{
public:
	State();
	virtual ~State();
	virtual void operation(StateMachine* ) = 0;
	virtual void changeState(StateMachine*) = 0;
protected:
	bool changeState(StateMachine* sm, State* st);//change state of sm to st
private:
};

// detail state
class ConcreteStateA : public State
{
public:
	ConcreteStateA();
	virtual ~ConcreteStateA();
	virtual void operation(StateMachine* );
	virtual void changeState(StateMachine*);
protected:
private:
};

// detail state
class ConcreteStateB : public State
{
public:
	ConcreteStateB();
	virtual ~ConcreteStateB();
	virtual void operation(StateMachine*);
	virtual void changeState(StateMachine*);
protected:
private:
};

#endif //~_STATE_H_