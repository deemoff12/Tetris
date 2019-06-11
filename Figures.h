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
    int figuresTab[7][4]{{1, 3, 5, 7}, {2, 4, 5, 7}, {3, 4, 5, 6}, {3, 4, 5, 7}, {2, 3, 5, 7}, {3, 5, 6, 7},
                         {2, 3, 4, 5}};

public:
    Figures();
    void rotate();
    int getFiguresTab(int i, int j) { return figuresTab[i][j]; }
    Punkt getPunkt(int i) { return pkt[i]; }
};

#endif //TETRIS_FIGURES_H
