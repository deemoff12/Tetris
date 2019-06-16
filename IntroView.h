//
// Created by dawid on 16.06.2019.
//

#ifndef TETRIS_INTROVIEW_H
#define TETRIS_INTROVIEW_H

#include <SFML/Graphics.hpp>
class IntroView {
    sf::RenderWindow& window;
    sf::RectangleShape play_button;
    sf::Text play_txt;
    sf::Font font;

    sf::Text tetristxt;
    sf::Text nazwisko;
    sf::Text indeks;
    sf::Text grupa;
public:
    IntroView(sf::RenderWindow& window);
    void draw(sf::RenderWindow& win);
};

#endif //TETRIS_INTROVIEW_H
