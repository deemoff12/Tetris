//
// Created by dawid on 09.06.2019.
//

#ifndef TETRIS_BOARD_H
#define TETRIS_BOARD_H
#include <SFML/Graphics.hpp>
#include <iostream>
class Board {
    int col = 10;
    int row = 20;

public:
    Board();
    int getCol() { return col; }
    int getRow() { return row; }
};

#endif //TETRIS_BOARD_H
