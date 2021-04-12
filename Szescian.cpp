#include "Szescian.h"
#include <iostream>

Szescian::Szescian()
{
	this->pierwszy = 0;

}

Szescian::Szescian(unsigned int pierwszy)
{
	this->pierwszy = pierwszy;

}

Szescian::~Szescian()
{

}

int Szescian::obliczanie3(unsigned int pierwszy)
{
	int Szescian;

	Szescian = pierwszy * pierwszy * pierwszy;
	std::cout << "Objetosc: " << Szescian << std::endl;
	return 0;
}