//
// Created by dawid on 16.06.2019.
//

#include "IntroController.h"
IntroController::IntroController(IntroView& iv)
        :view(iv) { }

void IntroController::handleEvent(sf::Event& event)
{
    if (event.type==sf::Event::MouseButtonPressed) {
        if (event.mouseButton.button==sf::Mouse::Left) {
            //Wczytanie pozycji myszy
            int x = event.mouseButton.x;
            int y = event.mouseButton.y;

            if (x>=85 && x<=200 && y>=310 && y<=390) // PLAY
            {

                finished = true;

            }
        }

    }
}
