//
// Created by dawid on 09.06.2019.
//

#ifndef TETRIS_FIGURES_H
#define TETRIS_FIGURES_H
#include <SFML/Graphics.hpp>
#include <iostream>
#include "Board.h"
struct Punkt
{
  int x,y;
};


class Figures {
    Board board;
    Punkt pkt[4], tmp[4]; // Figura będzię się składać z 4 segmentów. Tablica pkt jest kontenerem ich pozycji.
    //    Tablica przechowująca kształty figur. 7 rodzajów figur po 4 segmenty
    //    Ideologia tworzenia kształtów zaczerpnięta z filmiku poglądowego
    int figuresTab[7][4][4]{
            {1, 0, 0, 0,
             1, 0, 0, 0,
             1, 0, 0, 0,
             1, 0, 0, 0},

            {1, 0, 0, 0,
             1, 1, 0, 0,
             0, 1, 0, 0,
             0, 0, 0, 0},

            {0, 1, 0, 0,
             1, 1, 0, 0,
             1, 0, 0, 0,
             0, 0, 0, 0},

            {1, 1, 0, 0,
             1, 1, 0, 0,
             0, 0, 0, 0,
             0, 0, 0, 0},

            {1, 0, 0, 0,
             1, 1, 0, 0,
             1, 0, 0, 0,
             0, 0, 0, 0},

            {1, 0, 0, 0,
             1, 0, 0, 0,
             1, 1, 0, 0,
             0, 0, 0, 0},

            {0, 1, 0, 0,
             0, 1, 0, 0,
             1, 1, 0, 0,
             0, 0, 0, 0}};

public:
    Figures();
    void rotate();
    int getFiguresTab(int i, int j) { return figuresTab[3][i][j]; }
};

#endif //TETRIS_FIGURES_H
