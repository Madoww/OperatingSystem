#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>

class WindowBackground
{
public:
	WindowBackground(int height, int width);
	sf::Vector2f getPosition() { return background.getPosition(); }

	sf::RectangleShape background;
	sf::RectangleShape topBar;
};

class ApplicationWindow
{
public:
	ApplicationWindow(int windowID, int height = 64, int width = 64);
	const int getWindowID() { return m_windowID; }
	template <typename T>
	void Draw(T& thing)
	{
		thing.setOrigin(-m_windowBackground.getPosition());
		drawBuffer.push_back(&thing);
	}
	const std::vector<sf::Drawable*> GetDrawBuffer() { return drawBuffer; }
	void ClearDrawBuffer();
private:
	int m_windowID;
	WindowBackground m_windowBackground;
	std::vector<sf::Drawable*> drawBuffer;

};

