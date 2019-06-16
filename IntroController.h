//
// Created by dawid on 16.06.2019.
//

#ifndef TETRIS_INTROCONTROLLER_H
#define TETRIS_INTROCONTROLLER_H

#include "IntroView.h"
class IntroController {
    bool finished = false;
    IntroView& view;
public:
    IntroController(IntroView& iv);
    void handleEvent(sf::Event& event);
    bool isFinished() const { return finished; }
    void draw(sf::RenderWindow& win) { view.draw(win); }
};

#endif //TETRIS_INTROCONTROLLER_H
