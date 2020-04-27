#include <iostream>
#include "ICalculator.h"

class Multiplication : public ICalculator
{
	private:

		int res = 0;
		
	public :
	
		/* Multiplies the number num_1 and num_2
			and stores the value in res*/
		void Execute(const int num_1, const int num_2) override;
		
		/* Returns the result*/
		const int displayResult() override;
		
};