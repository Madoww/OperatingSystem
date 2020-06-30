#include <iostream>
#include "System.h"
#include "CalculatorApp.h"

int main()
{
	System& system = System::instance();
	system.StartSystem();
	system.Run();
	std::cin.get();
	return 0;
}