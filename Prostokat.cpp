#include "Prostokat.h"
#include <iostream>

Prostokat::Prostokat()
{
	this->pierwszy = 0;
	this->drugi = 0;
}

Prostokat::Prostokat(unsigned int pierwszy, unsigned int drugi)
{
	this->pierwszy = pierwszy;
	this->drugi = drugi;
}

Prostokat::~Prostokat()
{

}

int Prostokat::obliczanie(unsigned int pierwszy, unsigned int drugi)
{
	unsigned int prostokat;

	prostokat = pierwszy * 2 + drugi * 2;
	std::cout << "Obwod wynosi: " << prostokat << std::endl;
	return 0;
}