#pragma once
#include <deque>
#include <SFML/Graphics.hpp>
#include "ApplicationWindow.h"

class UserInterface
{
public:
	UserInterface(const UserInterface&) = delete;
	UserInterface operator=(const UserInterface&) = delete;
	static UserInterface& instance()
	{
		static UserInterface uinterface;
		return uinterface;
	}
	void CloseWindowWithID(int windowID);
	void Update();
	ApplicationWindow* const OpenWindow(int width, int height);
	int ID = 1;
private:
	UserInterface();
	sf::RenderWindow m_window;
	std::deque<ApplicationWindow> openWindows;
};