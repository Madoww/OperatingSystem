#include "UserInterface.h"
#include <iostream>
#include <algorithm>
#include "System.h"

UserInterface::UserInterface()
{
	
}

void UserInterface::Update()
{
    for (int i = 0; i < openWindows.size(); i++)
    {
        auto& drawables = openWindows[i].GetDrawBuffer();
        for (int j = 0; j < drawables.size(); j++)
        {
            System::instance().GetSystemWindow().draw(*drawables[j]);
        }
        openWindows[i].ClearDrawBuffer();
    }
}

ApplicationWindow* const UserInterface::OpenWindow(int width, int height)
{
	openWindows.emplace_back(ApplicationWindow(ID,width,height));
	ID++;
	return &openWindows[openWindows.size()-1];
}

void UserInterface::CloseWindowWithID(int windowID)
{
	for (int i = 0; i < openWindows.size(); i++)
	{
		if (openWindows[i].getWindowID() == windowID)
		{
			std::cout << "Closing a window with ID: " << windowID << std::endl;
			openWindows.erase(openWindows.begin() + i);
		}
	}
}


