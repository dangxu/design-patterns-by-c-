//context.h
#ifndef _STATEMACHINE_H_
#define _STATEMACHINE_H_

class State;

//Finite State Machine, FSM
class StateMachine
{
public:
	StateMachine();
	StateMachine(State* state);
	~StateMachine();
	void opration();
	void changState();
protected:
private:
	friend class State;
	bool changeState(State* state);
private:
	//record current state
	State* _state;
};

#endif //~_CONTEXT_H_