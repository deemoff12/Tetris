//
// Created by dawid on 16.06.2019.
//

#include "ScoreController.h"
ScoreController::ScoreController(ScoreView& v, sf::RenderWindow& win)
        :view(v), window(win) { }

void ScoreController::handleEvent(sf::Event& event)
{

    if (event.type==sf::Event::MouseButtonPressed) {

        if (event.mouseButton.button==sf::Mouse::Left) {
            //Wczytanie pozycji klikniecia myszy
            x = event.mouseButton.x;
            y = event.mouseButton.y;

            if (x>=85 && x<=235 && y>=310 && y<=390) {
                window.close();
            }
        }

    }
}