//
// Created by dawid on 16.06.2019.
//

#include "ScoreController.h"
ScoreController::ScoreController(ScoreView& v, IntroController& ic, sf::RenderWindow& win)
        :view(v), introController(ic), window(win) { }

void ScoreController::handleEvent(sf::Event& event)
{

    if (event.type==sf::Event::MouseButtonPressed) {

        if (event.mouseButton.button==sf::Mouse::Left) {
            //Wczytanie pozycji klikniecia myszy
            x = event.mouseButton.x;
            y = event.mouseButton.y;

            if (x>=300 && x<=650 && y>=450 && y<=600) {
                window.close();
            }
        }

    }
}