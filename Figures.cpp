//
// Created by dawid on 09.06.2019.
//

#include "Figures.h"
Figures::Figures()
{

}
void Figures::rotate()
{
    Punkt rotate = pkt[1]; // puntk o indeksie 1 odpowiada za centrum rotacji

    for (int i = 0; i<4; i++) {
        int x = pkt[i].y-rotate.y;
        int y = pkt[i].x-rotate.x;
        pkt[i].x = rotate.x-x;
        pkt[i].y = rotate.y+y;
    }
}
void Figures::setKind()
{
    kind = rand()%7;
}
void Figures::move(int dir)
{
    for (int i = 0; i<4; ++i) {
        pkt[i].x += dir;
    }
}
void Figures::fall()
{
    for (int i = 0; i<4; ++i) {
        pkt[i].y += 1;
    }
}
void Figures::setPunkt(int i)
{
    pkt[i].x = figuresTab[kind][i]%2;
    pkt[i].y = figuresTab[kind][i]/2;
}


