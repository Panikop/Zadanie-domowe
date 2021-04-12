#pragma once
#include <iostream>

class Trapez
{
public:
	Trapez();
	Trapez(unsigned int pierwszy, unsigned int drugi, unsigned int trzeci);
	~Trapez();


	int obliczanie4(unsigned int pierwszy, unsigned int drugi, unsigned int trzeci);

private:
	unsigned int pierwszy;
	unsigned int drugi;
	unsigned int trzeci;
};
