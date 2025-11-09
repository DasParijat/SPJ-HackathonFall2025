#include "Button.h"
#include <iostream>

sf::FloatRect Button::getGlobalBounds()
{
	return sprite.getGlobalBounds();
}

sf::Sprite Button::getSprite()
{
	if (!isVisible) {
		sprite.setColor(sf::Color(255, 255, 255, 0));
	}
	else {
		sprite.setColor(sf::Color(255, 255, 255, 255));
	}
	return sprite;
}

bool Button::buttonHandling(sf::RenderWindow& window, sf::Event& event)
{
	// default texture
	if (event.type == sf::Event::MouseMoved) {
		sf::Vector2i mousePos = sf::Mouse::getPosition(window);
		if (getGlobalBounds().contains(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y))) {
			// Change texture on hover
		}
	}

	// Check for mouse click
	if (event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left) {
		sf::Vector2i mousePos = sf::Mouse::getPosition(window);
		if (getGlobalBounds().contains(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y))) {
			// clicked texture
			// back to default 
			return true;
		}
	}

	return false;
}
