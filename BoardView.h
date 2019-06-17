//
// Created by dawid on 09.06.2019.
//

#ifndef TETRIS_BOARDVIEW_H
#define TETRIS_BOARDVIEW_H
#include "Board.h"
#include <SFML/Graphics.hpp>
class BoardView {
    sf::RenderWindow& window;
    Board& board;
    sf::Texture backGround;
    sf::Texture block;
    sf::Sprite spriteBG;
    sf::Sprite sprite;

public:
    BoardView(sf::RenderWindow& win, Board& board);
    void draw(sf::RenderWindow& win);
};

#endif //TETRIS_BOARDVIEW_H
