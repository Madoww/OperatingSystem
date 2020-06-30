#include "System.h"
#include <iostream>

System::System()
{

}

void System::StartSystem()
{
	std::cout << "Starting the operating system..." << std::endl;
}

void System::Run()
{
	while (true) 
	{
		userInterface.Update();
		taskManager.UpdateAllTasks();
	}
}