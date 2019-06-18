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
    int tab[20][10] = {0}; // Tablica służąca do przchowywania wartości elementów które się zatrzymały

public:
    Board();
    int getCol() { return col; }
    int getRow() { return row; }
    int getTab(int i, int j) { return tab[j][i]; }
    void setFieldsColor(int x, int y, int color) { tab[y][x] = color; }
    void checkLines();
};

#endif //TETRIS_BOARD_H
