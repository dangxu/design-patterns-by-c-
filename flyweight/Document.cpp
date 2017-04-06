#include "Document.h"
#include <iostream>

Character::Character(char c)
{
	this->symbol = c;
}

Character::~Character()
{
}

CharacterA::CharacterA(char c):Character(c)
{
}

CharacterA::~CharacterA()
{
}

char CharacterA::GetSymbol()
{
	return this->symbol;
}

void CharacterA::Display(int width,int height,int ascent,int descent,int pointSize)
{
	//接收并作用外部状态
	this->ascent = ascent;
	this->descent = descent;
	this->height = height;
	this->pointSize = pointSize;
	this->width = width;

	cout << this->symbol <<" "
		<< this->ascent <<" "
		<< this->descent <<" "
		<< this->height <<" "
		<< this->pointSize <<" "
		<< this->width << endl;
}

//
CharacterFactory::CharacterFactory()
{}

CharacterFactory::~CharacterFactory()
{}

Character* CharacterFactory::GetCharacter(char c)
{
	vector<Character*>::iterator iter = this->m_vecCharacter.begin();
	for(;iter != this->m_vecCharacter.end();iter++)
	{
		if((*iter)->GetSymbol() == c)
		{
			return *iter;
		}
	}
	Character* pf = new CharacterA(c);
	this->m_vecCharacter.push_back(pf);
	return pf;
}

vector<Character*>::size_type CharacterFactory::GetCount()
{
	return this->m_vecCharacter.size();
}