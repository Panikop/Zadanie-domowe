#include "Trapez.h"
#include <iostream>

Trapez::Trapez()
{
	this->pierwszy = 0;
	this->drugi = 0;
	this->trzeci = 0;
}

Trapez::Trapez(unsigned int pierwszy, unsigned int drugi, unsigned int trzeci)
{
	this->pierwszy = pierwszy;
	this->drugi = drugi;
	this->trzeci = trzeci;
}

Trapez::~Trapez()
{

}

int Trapez::obliczanie4(unsigned int pierwszy, unsigned int drugi, unsigned int trzeci)
{
	unsigned int trapez;

	trapez = ((pierwszy + drugi) * trzeci) / 2;
	std::cout << "Pole wynosi: " << trapez << std::endl;
	return 0;
}