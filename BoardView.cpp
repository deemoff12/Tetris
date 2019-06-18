//
// Created by dawid on 09.06.2019.
//

#include "BoardView.h"
BoardView::BoardView(sf::RenderWindow& win, Board& board)
        :window(win), board(board)
{

    backGround.loadFromFile("images/background.png");
    if (backGround.loadFromFile("images/background.png")) {
        spriteBG.setTexture(backGround);
    }
    else std::cout << "Nie wczytano tla" << std::endl;

    block.loadFromFile("images/tiles.png");
    if (block.loadFromFile("images/tiles.png")) {
        sprite.setTexture(block);
    }
    else std::cout << "Nie wczytano bloczka" << std::endl;
}
void BoardView::draw(sf::RenderWindow& win)
{
    win.draw(spriteBG);
    for (int i = 0; i<board.getCol(); ++i) {
        for (int j = 0; j<board.getRow(); ++j) {
            if (board.getTab(i, j)==0) continue;
            sprite.setTextureRect(sf::IntRect(board.getTab(i, j)*18, 0, 18, 18));

            sprite.setPosition(i*18, j*18);
            sprite.move(28, 31);
//            std::cout<<"wykonano" << std::endl;
            window.draw(sprite);
        }
    }
}
