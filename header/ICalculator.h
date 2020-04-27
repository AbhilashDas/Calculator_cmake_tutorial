#ifndef ICALCULATOR_H
#define ICALCULATOR_H

#include <iostream>

class ICalculator
{
	public :
		
		/* Executes a specific operation */
		virtual void Execute(const int num_1, const int num_2) = 0;

		/* Returns the result*/
		virtual const int displayResult() = 0;
		
};

#endif