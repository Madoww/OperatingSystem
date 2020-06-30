#include "ApplicationWindow.h"
#include <iostream>

ApplicationWindow::ApplicationWindow(int windowID, int height, int width)
	:m_windowID(windowID)
{
	std::cout << "Window constructor called, ID: " << windowID << std::endl;
}

void ApplicationWindow::Draw(sf::Drawable& thing)
{
	thingsToDraw.push_back(&thing);
}
