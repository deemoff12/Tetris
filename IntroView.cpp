//
// Created by dawid on 16.06.2019.
//

#include "IntroView.h"
IntroView::IntroView(sf::RenderWindow& window)
        :window(window)
{
    if (!font.loadFromFile("D://Studia//Programowanie Obiektowe//tetris//arial.ttf")) {
        abort();
    }
    nazwisko.setFont(font);
    tetristxt.setFont(font);
    indeks.setFont(font);
    grupa.setFont(font);
    play_txt.setFont(font);

    tetristxt.setPosition(90, 20);
    tetristxt.setFillColor(sf::Color::Red);
    tetristxt.setCharacterSize(50);
    tetristxt.setString("TETRIS");

    nazwisko.setString("Dawid Mazurek");
    nazwisko.setPosition(100, 80);
    nazwisko.setFillColor(sf::Color::Red);
    nazwisko.setCharacterSize(20);

    indeks.setString("Numer indeksu : 249067");
    indeks.setFillColor(sf::Color::Red);
    indeks.setPosition(70, 110);
    indeks.setCharacterSize(20);

    grupa.setCharacterSize(20);
    grupa.setPosition(90, 140);
    grupa.setFillColor(sf::Color::Red);
    grupa.setString("Grupa: Wtorek 15");

    play_button.setPosition(85, 310);
    play_button.setFillColor(sf::Color::Green);
    play_button.setSize(sf::Vector2f(150, 80));
    play_txt.setPosition(115, 320);
    play_txt.setFillColor(sf::Color::Black);
    play_txt.setString("PLAY");
    play_txt.setCharacterSize(40);
}
void IntroView::draw(sf::RenderWindow& win)
{
    win.draw(tetristxt);
    win.draw(nazwisko);
    win.draw(indeks);
    win.draw(grupa);
    win.draw(play_button);
    win.draw(play_txt);
}

