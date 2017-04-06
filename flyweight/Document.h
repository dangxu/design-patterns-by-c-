#ifndef _DOCUMENT_H_
#define _DOCUMENT_H_

#include <string>
#include <vector>
using namespace std;

// The 'Flyweight' abstract class
class Character
{
public:
    virtual ~Character();
    virtual void Display(int width,int height,int ascent,int descent,int pointSize)=0;
    virtual char GetSymbol()=0;
protected:
    char symbol;
    int width;
    int height;
    int ascent;
    int descent;
    int pointSize;
    Character(char c);
};

//A 'ConcreteFlyweight' class
class CharacterA:public Character
{
public:
    CharacterA(char c);
    ~CharacterA();
    virtual void Display(int width,int height,int ascent,int descent,int pointSize);
    virtual char GetSymbol();
protected:
private:
};

//B 'ConcreteFlyweight' class
class CharacterB:public Character
{
public:
    CharacterB(char c);
    ~CharacterB();
    virtual void Display(int width,int height,int ascent,int descent,int pointSize);
protected:
private:
};

//C 'ConcreteFlyweight' class
class CharacterC:public Character
{
public:
    CharacterC(char c);
    ~CharacterC();
    virtual void Display(int width,int height,int ascent,int descent,int pointSize);
protected:
private:
};

//D 'ConcreteFlyweight' class
class CharacterD:public Character
{
public:
    CharacterD(char c);
    ~CharacterD();
    virtual void Display(int width,int height,int ascent,int descent,int pointSize);
protected:
private:
};

class CharacterFactory
{
public:
    CharacterFactory();
    ~CharacterFactory();
    Character* GetCharacter(char);
    vector<Character*>::size_type GetCount();
private:
    vector<Character*> m_vecCharacter;
};

#endif