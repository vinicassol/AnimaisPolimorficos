#include <iostream>
using namespace std;


#ifndef ANIMAL_H
#define ANIMAL_H

class Animal
{
public:
	//cada tipo de animal tem sua maneira diferente de comunicar e caminhar
	virtual void Comunicar() = 0;
	virtual void Movimentar() = 0;
};

#endif // !ANIMAL_H


