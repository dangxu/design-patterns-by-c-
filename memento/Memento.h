//Memento.h
#ifndef _MEMENTO_H_
#define _MEMENTO_H_
#include <string>
using namespace std;

// struct of memo
class Memento
{
private:// notice here!
    friend class Originator;
    friend class Caretaker;

    Memento(const string& state);
    ~Memento();
    void SetState(const string& state);
    string GetState();
    string _state;
};

#endif //~_MEMENTO_H_