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
    figure.setKind();
    figure.setColor();
    figure.setPunkt();

}
void FiguresView::draw(sf::RenderWindow& win)
{
    for (int i = 0; i<4; ++i) {

        sprite.setTextureRect(sf::IntRect(figure.getColor()*18, 0, 18, 18));
        sprite.setPosition(figure.getPunkt(i).x*18, figure.getPunkt(i).y*18);
        sprite.move(28, 31);
        window.draw(sprite);
    }

}
