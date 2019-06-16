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

            if (x>=300 && x<=450 && y>=500 && y<=580) // PLAY
            {

                finished = true;

            }
        }

    }
}
