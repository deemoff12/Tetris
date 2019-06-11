//
// Created by dawid on 09.06.2019.
//

#include "BoardView.h"
BoardView::BoardView(sf::RenderWindow& win)
        :window(win)
{

    backGround.loadFromFile("images/background.png");
    if (backGround.loadFromFile("images/background.png")) {
        sprite.setTexture(backGround);
    }
    else std::cout << "Nie wczytano tla" << std::endl;

}
void BoardView::draw(sf::RenderWindow& win)
{
    win.draw(sprite);
}
