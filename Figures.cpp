//
// Created by dawid on 09.06.2019.
//

#include "Figures.h"
Figures::Figures(Board& board)
        :board(board)
{

}
void Figures::rotate()
{
    Punkt rotate = pkt[0]; // puntk o indeksie 1 odpowiada za centrum rotacji

    for (int i = 0; i<4; i++) {
        tmp[i] = pkt[i];
        int x = pkt[i].y-rotate.y;
        int y = pkt[i].x-rotate.x;
        pkt[i].x = rotate.x-x;
        pkt[i].y = rotate.y+y;
    }
    isCollision();
}
void Figures::setKind()
{
    kind = rand()%7;
}
void Figures::setColor()
{
    color = rand()%7;
}
void Figures::move(int dir)
{
    for (int i = 0; i<4; ++i) {
        tmp[i] = pkt[i];
        pkt[i].x += dir;
    }
    isCollision();

//    if (!isCollision())
//        for (int j = 0; j<4; ++j) {
//            pkt[j] = tmp[j];
//        }
}
void Figures::fall()
{
    for (int j = 0; j<4; ++j) {
        tmp[j] = pkt[j];
    }
    for (int i = 0; i<4; ++i) {
        if (pkt[i].y>=board.getRow())
            pkt[i] = tmp[i];
        pkt[i].y += 1;
    }
    for (int k = 0; k<4; ++k) {

    }
}
void Figures::setPunkt()
{
    for (int i = 0; i<4; ++i) {
        pkt[i].x = figuresTab[kind][i]%2;
        pkt[i].y = figuresTab[kind][i]/2;
    }
}
void Figures::isCollision()
{
    for (int i = 0; i<4; ++i) {
        if (pkt[i].x>=board.getCol() || pkt[i].x<+0) {
            pkt[i] = tmp[i];
        }
        if (pkt[i].y>=board.getRow()) {
            board.setFieldsColor(pkt[i].x, pkt[i].y, color);
            setKind();
            setColor();
            setPunkt();
        }
    }
}
void Figures::step()
{
    for (int i = 0; i<4; ++i) {
        tmp[i] = pkt[i];
    }
    for (int i = 0; i<4; ++i) {
        pkt[i].y += 1;
    }
    isCollision();
}


