//
// Created by dawid on 09.06.2019.
//

#include "Figures.h"
Figures::Figures()
{

}
void Figures::rotate()
{
    Punkt rotate = pkt[0]; // puntk o indeksie 1 odpowiada za centrum rotacji

    for (int i = 0; i<4; i++) {
        int x = pkt[i].y-rotate.y;
        int y = pkt[i].x-rotate.x;
        pkt[i].x = rotate.x-x;
        pkt[i].y = rotate.y+y;
    }
    if (!isCollision())
        for (int j = 0; j<4; ++j) {
            pkt[j] = tmp[j];
        }
}
void Figures::setKind()
{
    kind = rand()%7;
}
void Figures::move(int dir)
{
    for (int i = 0; i<4; ++i) {
        tmp[i] = pkt[i];
        pkt[i].x += dir;
    }

    if (!isCollision())
        for (int j = 0; j<4; ++j) {
            pkt[j] = tmp[j];
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
bool Figures::isCollision()
{
    for (int i = 0; i<4; ++i) {
        if (pkt[i].x>=board.getCol() || pkt[i].x<0 || pkt[i].y>=board.getRow()) return false;
        else if (board.getTab(pkt[i].y, pkt[i].x))return false;
        return true;
    }
}


