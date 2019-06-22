//
// Created by dawid on 09.06.2019.
//

#include "Board.h"
Board::Board()
{
}
void Board::checkLines()
{
    int counter;
    for (int j = row-1; j>0; j--) {
        counter = 0;
        for (int i = 0; i<col; ++i) {
            if (tab[j][i]) counter++;
        }
        if (counter==col)
            for (int k = j; k>0; k--) {
                for (int l = 0; l<col; ++l) {
                    tab[k][l] = tab[k-1][l];
                }
            }
    }
}
