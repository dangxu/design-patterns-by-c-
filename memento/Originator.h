#ifndef _ORIGINATOR_H_
#define _ORIGINATOR_H_
#include <string>
using namespace std;
class Memento;

//original data
class Originator
{
public:
	Originator();
	Originator(const string& state);
	~Originator();
	// recover state by Memento
	void restoreToMemento(Memento* pMemento);
	Memento* createMemento();
	void setState(const string& state);
	string getState();
	void show();
protected:
private:
	string _state;
};

#endif