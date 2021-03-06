//
// Created by dawid on 09.06.2019.
//

#ifndef TETRIS_FIGURES_H
#define TETRIS_FIGURES_H
#include <SFML/Graphics.hpp>
#include <iostream>
#include "Board.h"
struct Punkt {
  int x, y;
};

class Figures {
    Board& board;
    bool finished = false;
    bool collision = false;
    int kind;//Zmienna odpowiadająca za kształt figury i jej kolor
    int color;
    Punkt pkt[4], tmp[4]; // Figura będzię się składać z 4 segmentów. Tablica pkt jest kontenerem ich pozycji.
    //    Tablica przechowująca kształty figur. 7 rodzajów figur
    int figuresTab[7][4]{{1, 3, 5, 7}, {2, 4, 5, 7}, {3, 5, 4, 6}, {3, 5, 4, 7}, {2, 3, 5, 7}, {3, 5, 7, 6},
                         {2, 3, 4, 5}};

public:
    Figures(Board& board);
    bool isFinished() { return finished; }
    void rotate();
    void move(int dir);
    Punkt getPunkt(int i) { return pkt[i]; }
    void setKind();
    void setColor();
    int getColor() { return color; }
    int getKind() { return kind; }
    void setPunkt();
    void isCollision();
    void step();
    void debug();
    void getGameState();
};

#endif //TETRIS_FIGURES_H
