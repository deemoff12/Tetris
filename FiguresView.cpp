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
}
void FiguresView::draw(sf::RenderWindow& win)
{
//    figure.setPunktShape(3);
//    for (int i = 0; i<board.getRow(); i++) {
//        for (int j = 0; j<board.getCol(); j++) {
//            if (figure.getFiguresTab(i, j)==0) continue;
//            sprite.setTextureRect(sf::IntRect(2*18, 0, 18, 18));
//            sprite.setPosition(figure.getPunkt(i).x*18, figure.getPunkt(i).y*18);
//            sprite.move(28, 31); //offset
//        }

    for (int y = 0; y<4; y++)
        for (int x = 0; x<4; x++)
            if (figure.getFiguresTab(x, y)) {
                sprite.setTextureRect(sf::IntRect(2*18, 0, 18, 18));
                sprite.setPosition(sf::Vector2f((board.getCol()/2+x)*18, (y)*18));
                sprite.move(28, 31);
                window.draw(sprite);
            }
//        window.draw(sprite);


//    }

}
