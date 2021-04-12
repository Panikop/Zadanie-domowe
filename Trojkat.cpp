#include "Trojkat.h"
#include <iostream>

Trojkat::Trojkat()
{
	this->pierwszy = 0;
	this->drugi = 0;
	this->trzeci = 0;
}

Trojkat::Trojkat(unsigned int pierwszy, unsigned int drugi, unsigned int trzeci)
{
	this->pierwszy = pierwszy;
	this->drugi = drugi;
	this->trzeci = trzeci;
}

Trojkat::~Trojkat()
{
}

int Trojkat::obliczanie2(unsigned int pierwszy, unsigned int drugi, unsigned int trzeci)
{
	unsigned int trojkat;

	trojkat = pierwszy + drugi + trzeci;
	std::cout << "Obwod wynosi: " << trojkat << std::endl;
	return 0;
}