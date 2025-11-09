#pragma once
#include <SFML/Graphics.hpp>
#include <string>

class TextInput {
private:
    sf::Text text;        // The drawable text object
    sf::RectangleShape box; // Optional background box
    std::string content;  // Stores the typed string

public:
    TextInput();

    // Setup
    void setFont(sf::Font& font);
    void setPosition(float x, float y);
    void setBoxSize(float width, float height);

    // Input handling
    void handleEvent(sf::Event& event);
    void clear();

    // Drawing
    void draw(sf::RenderWindow& window);

    // Accessor
    std::string getString() const { return content; }
};
