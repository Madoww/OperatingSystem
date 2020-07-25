#pragma once
#include <SFML/Graphics.hpp>
#include "UserInterface.h"
#include "TaskManager.h"

enum SystemStatus
{
    Initializing,
    Running,
    Closing
};

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
    
    sf::RenderWindow& GetSystemWindow() { return systemWindow; }
    
	void StartSystem();
private:
    void Run();
    System();
    UserInterface& userInterface = UserInterface::instance();
    TaskManager& taskManager = TaskManager::instance();
    sf::RenderWindow systemWindow;
    SystemStatus status;
    sf::Event windowEvent;
};
