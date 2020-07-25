#include <iostream>
#include "System.h"
#include "CalculatorApp.h"

int main()
{
	System& system = System::instance();
	system.StartSystem();
	return 0;
}
