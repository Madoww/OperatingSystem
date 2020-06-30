#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>

class ApplicationWindow
{
public:
	ApplicationWindow(int windowID, int height = 64, int width = 64);
	const int getWindowID() { return m_windowID; }
	void Draw(sf::Drawable& thing);
	const std::vector<sf::Drawable*> GetThingsToDraw() { return thingsToDraw; }
	void ClearDrawBuffer() { thingsToDraw.clear(); }
private:
	sf::RectangleShape m_windowBackground;
	std::vector<sf::Drawable*> thingsToDraw;
	int m_windowID;
};