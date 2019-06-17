//
// Created by dawid on 19.05.2019.
//

#include "GameManager.h"

GameManager::GameManager(IntroController& ic, FiguresController& fc, ScoreController& sc)
        :introController(ic), figuresController(fc), scoreController(sc)
{

//    state = INTRO;
    state = 1;
}

void GameManager::updateState()
{
    switch (state) {
    case 1 ://INTRO:
        if (introController.isFinished())
            state = 2;//GAME;
        break;
    case 2://GAME:
        if (figuresController.isFinished())
            state = 3;//SCORE;
        break;
    case 3://SCORE:
        if (scoreController.isFinished()) {
            scoreController.changeState();
            state = 1;//INTRO;
        }
        break;
    }
}

void GameManager::handleEvent(sf::Event& event)
{
    switch (state) {
    case 1://INTRO:
        introController.handleEvent(event);
        break;
    case 2://GAME:
        figuresController.handleEvent(event);
        break;
    case 3://SCORE:
        scoreController.handleEvent(event);
        break;
    }
    updateState();
}

void GameManager::draw(sf::RenderWindow& win)
{
    // updateState() ??
    switch (state) {
    case 1://INTRO:
        introController.draw(win);

        break;
    case 2://GAME:
        figuresController.draw(win);
        break;
    case 3://SCORE:
        scoreController.draw(win);
        break;
    }
}

#include "GameManager.h"
