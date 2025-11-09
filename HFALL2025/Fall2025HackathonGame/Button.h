#pragma once
#include "SFML/Graphics.hpp"

class Button {
protected:
	sf::Sprite sprite;
	bool isVisible;
	bool isClicked;

	std::string defaultTexture;
	std::string hoverTexture;
	std::string clickedTexture;

public:
	
	sf::FloatRect getGlobalBounds();
	sf::Sprite getSprite();

	bool buttonHandling(sf::RenderWindow& window, sf::Event& event);
};