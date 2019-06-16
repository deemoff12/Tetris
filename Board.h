//
// Created by dawid on 09.06.2019.
//

#ifndef TETRIS_BOARD_H
#define TETRIS_BOARD_H
#include <SFML/Graphics.hpp>
#include <iostream>
class Board {
    static const int col = 10;
    static const int row = 20;
    int tab[row][col] = {0}; // Tablica służąca do przchowywania wartości elementów które się zatrzymały

public:
    Board();
    int getCol() { return col; }
    int getRow() { return row; }
    int getTab(int i, int j) { return tab[i][j]; }
};

#endif //TETRIS_BOARD_H
