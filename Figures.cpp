//
// Created by dawid on 09.06.2019.
//

#include "Figures.h"
Figures::Figures(Board& board)
        :board(board)
{
    for (int i = 0; i<board.getRow(); ++i) {
        for (int j = 0; j<board.getCol(); ++j) {
            board.setFieldsColor(j, i, 0);
        }
    }
}
//Ideologia obracania zaczerpnieta z filmika poglądowego
void Figures::rotate()
{
    Punkt rotate = pkt[1]; // puntk o indeksie 1 odpowiada za centrum rotacji

    for (int i = 0; i<4; i++) {
        tmp[i] = pkt[i];
        int x = pkt[i].y-rotate.y;
        int y = pkt[i].x-rotate.x;
        pkt[i].x = rotate.x-x;
        pkt[i].y = rotate.y+y;
    }
    for (int i = 0; i<4; ++i) {
        if (pkt[i].x>=board.getCol() || pkt[i].x<0) {
            for (int j = 0; j<4; ++j) {
                pkt[j] = tmp[j];
            }
        }
    }
}
void Figures::setKind()
{
    kind = rand()%7;
}
void Figures::setColor()
{
    color = rand()%7+1; // Dodana 1 ze względu na prawidłowe działanie funkcji Draw w Klasie BoardView
}
void Figures::move(int dir)
{
    for (int i = 0; i<4; ++i) {
        tmp[i] = pkt[i];
        pkt[i].x += dir;
    }
    for (int i = 0; i<4; ++i) {
        if (pkt[i].x>=board.getCol() || pkt[i].x<0) {
            for (int j = 0; j<4; ++j) {
                pkt[j] = tmp[j];
            }
        }
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
        if (pkt[i].x>=board.getCol() || pkt[i].x<0) {
            for (int j = 0; j<4; ++j) {
                pkt[j] = tmp[j];
            }
        }
    }
    for (int j = 0; j<4; ++j) {
        if (pkt[j].y>=board.getRow()) {
            for (int i = 0; i<4; ++i) {
                std::cout << "(" << tmp[i].y << " , " << tmp[i].x << " )" << color << std::endl;
                board.setFieldsColor(tmp[i].x, tmp[i].y, color);
            }
            collision = true;
        }
        if (board.getTab(tmp[j].x, tmp[j].y+1)!=0) {
            for (int i = 0; i<4; ++i) {
                std::cout << "(" << tmp[i].y << " , " << tmp[i].x << " )" << color << std::endl;
                board.setFieldsColor(tmp[i].x, tmp[i].y, color);
                collision = true;
            }
        }
        if (collision) {

            setKind();
            setColor();
            setPunkt();
            collision = false;
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
    board.checkLines();
    getGameState();
}
void Figures::debug()
{
    for (int i = 0; i<board.getCol(); ++i) {
        for (int j = 0; j<board.getRow(); ++j) {
            if (board.getTab(i, j)!=0) {
                std::cout << "board (" << i << "," << j << ")" << board.getTab(i, j) << std::endl;
            }
        }
    }
    std::cout << "KONIEC FUNKCJI" << std::endl;
}
// Warunek kończący gry - Gdy któreś z pól w wierszu o indeksie 3 jest pomalowany kończe grę
//Jest to warunek wystarczający do stwierdzenia przegranej
void Figures::getGameState()
{
    for (int i = 0; i<board.getCol(); ++i) {
        if (board.getTab(i, 3)) finished = true;
    }
}


