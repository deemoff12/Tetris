//
// Created by dawid on 09.06.2019.
//

#ifndef TETRIS_FIGURES_H
#define TETRIS_FIGURES_H
#include <SFML/Graphics.hpp>
#include <iostream>

struct Punkt
{
  int x,y;
} pkt[4],tmp[4]; // Figura będzię się składać z 4 segmentów. Tablica pkt jest kontenerem ich pozycji.


class Figures {


public:
    Figures();
};

#endif //TETRIS_FIGURES_H
