//
// Created by dawid on 11.06.2019.
//

#ifndef TETRIS_FIGURESVIEW_H
#define TETRIS_FIGURESVIEW_H

#include <SFML/Graphics.hpp>
#include <iostream>
#include "Figures.h"
#include "Board.h"
class FiguresView {
    sf::RenderWindow& window;
    sf::Texture figuresView;
    sf::Sprite sprite;
    Figures& figure;
    Board& board;
public:
    FiguresView(sf::RenderWindow& win, Figures& figures, Board& board);
    void draw(sf::RenderWindow& win);
};

#endif //TETRIS_FIGURESVIEW_H
