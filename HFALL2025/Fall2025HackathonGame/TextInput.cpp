#include "TextInput.h"
#include <iostream>

TextInput::TextInput() {
    box.setFillColor(sf::Color(30, 30, 30, 150));
    box.setOutlineColor(sf::Color::White);
    box.setOutlineThickness(2.f);
    box.setSize({ 400.f, 40.f });

    text.setCharacterSize(24);
    text.setFillColor(sf::Color::White);
    text.setPosition(10.f, 5.f);
}

void TextInput::setFont(sf::Font& font) {
    text.setFont(font);
}

void TextInput::setPosition(float x, float y) {
    box.setPosition(x, y);
    text.setPosition(x + 10.f, y + 5.f);
}

void TextInput::setBoxSize(float width, float height) {
    box.setSize({ width, height });
}

void TextInput::handleEvent(sf::Event& event) {
    if (event.type == sf::Event::TextEntered) {
        if (event.text.unicode == 8 && !content.empty()) {
            // Backspace
            content.pop_back();
        }
        else if (event.text.unicode >= 32 && event.text.unicode < 128) {
            // Regular character (printable ASCII)
            content += static_cast<char>(event.text.unicode);
        }
        text.setString(content);
    }
}

void TextInput::clear() {
    content.clear();
    text.setString("");
}

void TextInput::draw(sf::RenderWindow& window) {
    window.draw(box);
    window.draw(text);
}
