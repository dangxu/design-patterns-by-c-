#ifndef _STRATEGY_H_
#define _STRATEGY_H_

class Strategy
{
public:
	Strategy();
	virtual ~Strategy();
	virtual void algrithmInterface() = 0;
protected:
private:
};

class ConcreteStrategyA:public Strategy
{
public:
	ConcreteStrategyA();
	virtual ~ConcreteStrategyA();
	void algrithmInterface();
protected:
private:
};

class ConcreteStrategyB:public Strategy
{
public:
	ConcreteStrategyB();
	virtual ~ConcreteStrategyB();
	void algrithmInterface();
protected:
private:
};

#endif //~_STRATEGY_H_