//
// Created by dawid on 11.06.2019.
//

#include "FiguresView.h"
FiguresView::FiguresView(sf::RenderWindow& win, Figures& figure, Board board)
        :window(win), figure(figure), board(board)
{
    figuresView.loadFromFile("images/tiles.png");
    if (figuresView.loadFromFile("images/tiles.png")) {
        sprite.setTexture(figuresView);
    }
    else std::cout << "Nie wczytano figury" << std::endl;

    sf::Sprite s(figuresView);
    s.setTextureRect(sf::IntRect(0, 0, 18, 18));
}
void FiguresView::draw(sf::RenderWindow& win)
{
    for (int i = 0; i<board.getRow(); i++) {
        for (int j = 0; j<board.getCol(); j++) {
            if (figure.getFiguresTab(i, j)==0) continue;
            sprite.setTextureRect(sf::IntRect(figure.getFiguresTab(i, j)*18, 0, 18, 18));
            sprite.setPosition(j*18, i*18);
            sprite.move(28, 31); //offset
            window.draw(sprite);
        }

        for (int i = 0; i<4; i++) {
            sprite.setTextureRect(sf::IntRect(2*18, 0, 18, 18));
            sprite.setPosition(figure.getPunkt(i).x*18, figure.getPunkt(i).y*18);
            sprite.move(28, 31); //offset
            window.draw(sprite);
        }
    }

}
