//
// Created by dawid on 09.06.2019.
//

#include "Figures.h"
Figures::Figures()
{
    sf::Texture figure;
    figure.loadFromFile("images/tiles.png");
    if (!figure.loadFromFile("images/tiles.png"))
    {
        std::cout<<"Nie wczytano figury"<<std::endl;
    }


    sf::Sprite s(figure);
    s.setTextureRect(sf::IntRect(0,0,18,18));

//    Tablica przechowująca kształty figur. 7 rodzajów figur po 4 segmenty
//    Ideologia tworzenia kształtów zaczerpnięta z filmiku poglądowego
    int figures[7][4]{
            1,3,5,7, // I
            2,4,5,7, // Z
            3,4,5,6, // S
            3,4,5,7, // T
            2,3,5,7, // L
            3,5,6,7, // J
            2,3,4,5, // O
    };
}
