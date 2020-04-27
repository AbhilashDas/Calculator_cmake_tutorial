#include "Division.h"

void Division::Execute(const int num_1, const int num_2)
{
	try
	{
		res = num_1 / num_2;
	}
	catch( ... )
	{
		res = 0;
	}
}

const int Division::displayResult()
{
	std::cout << " Division of two values are " << res << std::endl;
	return res;
}