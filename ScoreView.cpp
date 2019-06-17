//
// Created by dawid on 16.06.2019.
//

#include "ScoreView.h"
ScoreView::ScoreView()
{
    if (!font.loadFromFile("D://Studia//Programowanie Obiektowe//gitlab//minesweeper//arial.ttf")) {
        abort();
    }
    endGameTxt.setFont(font);
    sad.setFont(font);

    sad.setPosition(40, 20);
    sad.setFillColor(sf::Color::Green);
    sad.setString("Niestety Przegrales");
    sad.setCharacterSize(30);

    endGame.setPosition(85, 310);
    endGame.setFillColor(sf::Color::Green);
    endGame.setSize(sf::Vector2f(150, 80));
    endGame.setOutlineThickness(2);
    endGame.setOutlineColor(sf::Color::Green);

    endGameTxt.setFillColor(sf::Color::Blue);
    endGameTxt.setOutlineColor(sf::Color::Magenta);
    endGameTxt.setOutlineThickness(2);
    endGameTxt.setPosition(100, 335);
    endGameTxt.setString("KONIEC GRY");
    endGameTxt.setCharacterSize(20);

}

void ScoreView::draw(sf::RenderWindow& win)
{
    win.clear(sf::Color::Black);
    win.draw(endGame);
    win.draw(endGameTxt);
    win.draw(sad);
}
