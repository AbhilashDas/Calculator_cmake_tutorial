#include "Addition.h"

void Addition::Execute(const int num_1, const int num_2)
{
	res = num_1 + num_2;
}

const int Addition::displayResult()
{
	std::cout << " Sum of two values are " << res << std::endl;
	return res;
}