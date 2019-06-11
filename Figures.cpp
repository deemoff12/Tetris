//
// Created by dawid on 09.06.2019.
//

#include "Figures.h"
Figures::Figures()
{

}
void Figures::rotate()
{
    Punkt rotate = pkt[1]; // puntk o indeksie 1 odpowiada za cetrum rotacji

    for (int i = 0; i<4; i++) {
        int x = pkt[i].y-rotate.y;
        int y = pkt[i].x-rotate.x;
        pkt[i].x = rotate.x-x;
        pkt[i].y = rotate.y+y;
    }
}

int tab[3][3]{{1, 2, 3}, {4, 5, 6}};