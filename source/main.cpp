#include <iostream>
#include <memory>
#include "Addition.h"
#include "Substraction.h"
#include "Multiplication.h"
#include "Division.h"

int main(const int argc , char *argv[])
{
	int user_input;
	int number1;
	int number2;
	std::shared_ptr<ICalculator> operation ;
	
	std::cout<< " Started the Calculator Application " << std::endl;
	
	std::cout << "Enter the operation to be performed" << std::endl;
	std::cout << " Enter 1 for Addition " << std::endl;
	std::cout << " Enter 2 for Substraction " << std::endl;
	std::cout << " Enter 3 for Multiplication " << std::endl;
	std::cout << " Enter 4 for Division " << std::endl;
	
	std::cin >> user_input;
	
	switch(user_input)
	{
		case 1 : 
		{
			operation = std::make_shared<Addition>();
			std::cout << " Enter the first number " << std::endl;
			std::cin >> number1;
			std::cout << " Enter the Second number" << std::endl;
			std::cin >> number2;
			
			operation->Execute(number1, number2);
			std::cout << operation->displayResult() << std::endl;
			
		}
		break;
		case 2:
		{
			operation = std::make_shared<Substraction>();
			std::cout << " Enter the first number " << std::endl;
			std::cin >> number1;
			std::cout << " Enter the Second number" << std::endl;
			std::cin >> number2;

			operation->Execute(number1, number2);
			std::cout << operation->displayResult() << std::endl;

		}
		break;
		case 3:
		{
			operation = std::make_shared<Multiplication>();
			std::cout << " Enter the first number " << std::endl;
			std::cin >> number1;
			std::cout << " Enter the Second number" << std::endl;
			std::cin >> number2;

			operation->Execute(number1, number2);
			std::cout << operation->displayResult() << std::endl;

		}
		break;
		case 4:
		{
			operation = std::make_shared<Division>();
			std::cout << " Enter the first number " << std::endl;
			std::cin >> number1;
			std::cout << " Enter the Second number" << std::endl;
			std::cin >> number2;

			operation->Execute(number1, number2);
			std::cout << operation->displayResult() << std::endl;

		}
		break;
		default:
			break;
	}
}
