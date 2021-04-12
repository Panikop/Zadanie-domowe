#include "Kolo.h"
#include <iostream>

Kolo::Kolo()
{
	this->pierwszy = 0;

}

Kolo::Kolo(float pierwszy)
{
	this->pierwszy = pierwszy;

}

Kolo::~Kolo()
{

}

float Kolo::obliczanie5(float pierwszy)
{
	float Kolo;

	Kolo = pierwszy * pierwszy * 3.14;
	std::cout << "Pole: " << Kolo << std::endl;
	return 0;
}