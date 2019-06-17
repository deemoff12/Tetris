//
// Created by dawid on 16.06.2019.
//

#ifndef TETRIS_GAMEMANAGER_H
#define TETRIS_GAMEMANAGER_H

#include "IntroController.h"
#include "ScoreController.h"
#include "FiguresController.h"
class GameManager {
    IntroController& introController;
    FiguresController& figuresController;
    ScoreController& scoreController;

    int state;

    void updateState();
public:
    GameManager(IntroController& ic, FiguresController& fc, ScoreController& sc);
    int getGameState() { return state; }
    void draw(sf::RenderWindow& win);

    void handleEvent(sf::Event& event);
};

#endif //TETRIS_GAMEMANAGER_H
