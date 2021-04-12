#pragma once
#include <iostream>

class Prostokat
{
public:
	Prostokat();
	Prostokat(unsigned int pierwszy, unsigned int drugi);
	~Prostokat();


	int obliczanie(unsigned int pierwszy, unsigned int drugi);

private:
	unsigned int pierwszy;
	unsigned int drugi;
};