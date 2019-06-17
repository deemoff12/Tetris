//
// Created by dawid on 16.06.2019.
//

#ifndef TETRIS_SCORECONTROLLER_H
#define TETRIS_SCORECONTROLLER_H

#include "ScoreView.h"
#include "IntroController.h"
class ScoreController {
    bool finished = false;
    ScoreView& view;
    sf::RenderWindow& window;
    int x, y;
public:
    ScoreController(ScoreView& v, sf::RenderWindow& win);
    void handleEvent(sf::Event& event);

    // no need to change this
    void draw(sf::RenderWindow& win) { view.draw(win); }
    bool isFinished() const { return finished; }
    void changeState() { finished = false; }
};

#endif //TETRIS_SCORECONTROLLER_H
