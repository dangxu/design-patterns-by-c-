//context.h
#ifndef _CONTEXT_H_
#define _CONTEXT_H_

class State;

//Finite State Machine, FSM
class Context
{
public:
	Context();
	Context(State* state);
	~Context();
	void OprationInterface();
	void OperationChangState();
protected:
private:
	friend class State;
	bool ChangeState(State* state);
private:
	//record current state
	State* _state;
};

#endif //~_CONTEXT_H_