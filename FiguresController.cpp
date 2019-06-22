//
// Created by dawid on 17.06.2019.
//

#include "FiguresController.h"
FiguresController::FiguresController(sf::RenderWindow& win, Figures& fig, FiguresView& view, BoardView& bView)
        :window(win), figures(fig), view(view), bView(bView)
{

}
void FiguresController::handleEvent(sf::Event& event)
{
    if (event.type==sf::Event::KeyPressed) {
        if (event.key.code==sf::Keyboard::Left) figures.move(-1);
        if (event.key.code==sf::Keyboard::Right) figures.move(1);
        if (event.key.code==sf::Keyboard::Up) figures.rotate();
        if (event.key.code==sf::Keyboard::Down) figures.step();
        if (event.key.code==sf::Keyboard::Numpad0) figures.debug();
    }
}
void FiguresController::draw(sf::RenderWindow& win)
{
    bView.draw(win);
    view.draw(win);
}

