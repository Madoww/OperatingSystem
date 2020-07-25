#include "System.h"
#include <iostream>

System::System()
    :systemWindow(sf::VideoMode(800, 600), "Operating System v0.01")
{
    systemWindow.setVerticalSyncEnabled(true);
    status = SystemStatus::Initializing;
}

void System::StartSystem()
{
	std::cout << "Starting the operating system..." << std::endl;
    status = SystemStatus::Running;
    Run();
}

void System::Run()
{
	while (systemWindow.isOpen())
	{
        while (systemWindow.pollEvent(windowEvent))
        {
            if (windowEvent.type == sf::Event::Closed)
                systemWindow.close();
        }
        
        systemWindow.clear();
        
        userInterface.Update();
        taskManager.UpdateAllTasks();
        
        systemWindow.display();
        
	}
}
