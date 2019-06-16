//
// Created by dawid on 16.06.2019.
//

#ifndef TETRIS_GAMEMANAGER_H
#define TETRIS_GAMEMANAGER_H

#include "IntroController.h"
#include "ScoreController.h"
class GameManager {
    IntroController& introController;
    ScoreController& scoreController;

//    enum GameState {
//      INTRO, GAME, SCORE
//    } state;

    int state;

    void updateState();
public:
    GameManager(IntroController& ic, ScoreController& sc);
    int getGameState() { return state; }
    void draw(sf::RenderWindow& win);

    void handleEvent(sf::Event& event);
};

#endif //TETRIS_GAMEMANAGER_H
