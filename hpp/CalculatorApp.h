#pragma once
#include "InternalApplication.h"

class CalculatorApp : public InternalApplication
{
public:
	CalculatorApp()
	{
		shape.setSize(sf::Vector2f(30, 30));
		OpenWindow();
	}
	void Draw() override
	{
		appWindow->Draw(shape);
	}
	sf::RectangleShape shape;
};