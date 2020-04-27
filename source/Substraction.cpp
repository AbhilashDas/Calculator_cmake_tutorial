#include "Substraction.h"

void Substraction::Execute(const int num_1, const int num_2)
{
	res = num_1 - num_2;
}

const int Substraction::displayResult()
{
	std::cout << " Substraction of two values are " << res << std::endl;
	return res;
}