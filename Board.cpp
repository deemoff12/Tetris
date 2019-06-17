//
// Created by dawid on 09.06.2019.
//

#include "Board.h"
Board::Board()
{
//    for (int i = 0; i<row; ++i) {
//        for (int j = 0; j<col; ++j) {
//            tab[row][col]=0;
//        }
//    }

}
void Board::checkLines()
{
    int k = row-1;
    for (int i = row-1; i>0; ++i) {
        int counter = 0;
        for (int j = 0; j<col; ++j) {
            if (tab[i][j]) counter++;
            tab[k][j] = tab[i][j];
        }
        if (counter<col)k--;
    }
}
