//Handle.h
#ifndef _HANDLE_H_
#define _HANDLE_H_

class Handle
{
public:
	virtual ~Handle();
	virtual void handleRequest() = 0;
	void setHandler  (Handle* succ);
	Handle* getHandler();
protected:
	Handle();
	Handle(Handle* succ);
private:
	Handle* _succ;
};

class ConcreteHandleA:public Handle
{
public:
	ConcreteHandleA();
	~ConcreteHandleA();
	ConcreteHandleA(Handle* succ);
	void handleRequest();
protected:
private:
};

class ConcreteHandleB:public Handle
{
public:
	ConcreteHandleB();
	~ConcreteHandleB();
	ConcreteHandleB(Handle* succ);
	void handleRequest();
protected:
private:
};

#endif //~_HANDLE_H_