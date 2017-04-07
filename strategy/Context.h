#ifndef _CONTEXT_H_
#define _CONTEXT_H_

class Strategy;

//client
class Context
{
public:
    Context(Strategy* stg);
    ~Context();
    //call algorithm interface
    void doAction();
protected:
private:
    Strategy* _stg;//by compositation mode, diff from Template which by inheritance mode
};

#endif //~_CONTEXT_H_