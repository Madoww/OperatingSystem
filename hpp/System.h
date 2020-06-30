#pragma once
#include <SFML/Graphics.hpp>
#include "UserInterface.h"
#include "TaskManager.h"

class System
{
public:
	System(const System&) = delete;
	System operator=(const System&) = delete;
	static System& instance()
	{
		static System sys;
		return sys;
	}
	void StartSystem();
	void Run();
	
private:
	System();
	UserInterface& userInterface = UserInterface::instance();
	TaskManager& taskManager = TaskManager::instance();
};