//state.h
#ifndef _STATE_H_
#define _STATE_H_

class Context;

class State
{
public:
	State();
	virtual ~State();
	//operation for this state
	virtual void OperationInterface(Context* ) = 0;
	//after operation, change context state to next state.
	virtual void OperationChangeState(Context*) = 0;
protected:
	bool ChangeState(Context* con,State* st);
private:
	//bool ChangeState(Context* con,State* st);
};

// detail state
class ConcreteStateA : public State
{
public:
	ConcreteStateA();
	virtual ~ConcreteStateA();
	virtual void OperationInterface(Context* );
	virtual void OperationChangeState(Context*);
protected:
private:
};

// detail state
class ConcreteStateB : public State
{
public:
	ConcreteStateB();
	virtual ~ConcreteStateB();
	virtual void OperationInterface(Context* );
	virtual void OperationChangeState(Context*);
protected:
private:
};

#endif //~_STATE_H_