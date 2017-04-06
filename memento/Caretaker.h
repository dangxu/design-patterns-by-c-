#ifndef _CARETAKER_H_
#define _CARETAKER_H_

class Memento;
// to store last memo
class Caretaker
{
public:
	Caretaker();
	~Caretaker();
	void setMemento(Memento*);
	Memento* getMemento();
private:
	Memento* _memento;
};

#endif