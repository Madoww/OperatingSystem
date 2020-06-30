#include "UserInterface.h"
#include <iostream>
#include <algorithm>

UserInterface::UserInterface()
	:m_window(sf::VideoMode(800, 600), "Operating System v0.01")
{

}

void UserInterface::Update()
{
	sf::Event event;
	while (m_window.pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
			m_window.close();
	}

	m_window.clear();
	for (int i = 0; i < openWindows.size(); i++)
	{
		auto drawables = openWindows[i].GetThingsToDraw();
		for (int j = 0; j < drawables.size(); j++)
		{
			m_window.draw(*drawables[j]);
		}
	}
	m_window.display();
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

ApplicationWindow* const UserInterface::OpenWindow()
{
	openWindows.emplace_back(ApplicationWindow(ID));
	ID++;
	return &openWindows[openWindows.size()-1];
}

