//
// Created by dawid on 17.06.2019.
//

#ifndef TETRIS_FIGURESCONTROLLER_H
#define TETRIS_FIGURESCONTROLLER_H

#include "FiguresView.h"
#include "BoardView.h"
class FiguresController {
    bool finished = false;
    Figures& figures;
    sf::RenderWindow& window;
    FiguresView& view;
    BoardView& bView;
public:
    FiguresController(sf::RenderWindow& win, Figures& fig, FiguresView& view, BoardView& bView);
    bool isFinished() { return finished; }
    void handleEvent(sf::Event& event);
    void draw(sf::RenderWindow& win);
};

#endif //TETRIS_FIGURESCONTROLLER_H
