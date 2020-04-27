#include "Multiplication.h"

void Multiplication::Execute(const int num_1, const int num_2)
{
	res = num_1 * num_2;
}

const int Multiplication::displayResult()
{
	std::cout << " Multiplication of two values are " << res << std::endl;
	return res;
}