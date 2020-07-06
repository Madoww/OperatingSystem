#include "ApplicationWindow.h"
#include <iostream>

ApplicationWindow::ApplicationWindow(int windowID, int height, int width)
	:m_windowID(windowID), m_windowBackground(height,width)
{
	std::cout << "Window constructor called, ID: " << windowID << std::endl;
}

void ApplicationWindow::ClearDrawBuffer()
{
	drawBuffer.erase(drawBuffer.begin(), drawBuffer.end());
	drawBuffer.push_back(&m_windowBackground.background);
	drawBuffer.push_back(&m_windowBackground.topBar);
}

WindowBackground::WindowBackground(int width, int height)
{
	background.setSize(sf::Vector2f(width, height));
	topBar.setSize(sf::Vector2f(width, 20));
	topBar.setFillColor(sf::Color::Blue);
	background.setPosition(topBar.getPosition().x, topBar.getPosition().y + topBar.getSize().y);
}
