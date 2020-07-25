#pragma once
#include "InternalApplication.h"

class CalculatorApp : public InternalApplication
{
public:
	CalculatorApp()
	{
		shape.setSize(sf::Vector2f(30, 30));
        shape.setFillColor(sf::Color::Green);
		circle.setRadius(15);
		circle.setPosition(60, 40);
		circle.setFillColor(sf::Color::Red);
		texture.loadFromFile("leaf.png");
		sprite.setTexture(texture);
		OpenWindow(150,150);
	}
	void Draw() override
	{
		appWindow->Draw(shape);
		appWindow->Draw(circle);
		appWindow->Draw(sprite);
	}
	void Update() override
	{
        
	}
	sf::RectangleShape shape;
	sf::CircleShape circle;
	sf::Sprite sprite;

	sf::Texture texture;
};
