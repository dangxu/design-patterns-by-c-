#include "Caretaker.h"
#include "Memento.h"

Caretaker::Caretaker()
{}

Caretaker::~Caretaker()
{
    if (_memento)
    {
        delete _memento;
        _memento = NULL;
    }
}

Memento* Caretaker::getMemento()
{
    return this->_memento;
}

void Caretaker::setMemento(Memento* pMemento)
{
    this->_memento = pMemento;
}