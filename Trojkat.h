#pragma once
#include <iostream>

class Trojkat
{
public:
	Trojkat();
	Trojkat(unsigned int pierwszy,unsigned int drugi,unsigned int trzeci);
	~Trojkat();


	int obliczanie2(unsigned int pierwszy,unsigned int drugi,unsigned int trzeci);

private:
	unsigned int pierwszy;
	unsigned int drugi;
	unsigned int trzeci;
};
