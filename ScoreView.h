//
// Created by dawid on 16.06.2019.
//

#ifndef TETRIS_SCOREVIEW_H
#define TETRIS_SCOREVIEW_H

#include <SFML/Graphics.hpp>

class ScoreView {
private:
    sf::RectangleShape endGame;
    sf::Text endGameTxt;
    sf::Font font;

public:
    ScoreView();
    void draw(sf::RenderWindow& win);
//    void scoreDraw(sf::RenderWindow &win,string score){win.draw(score);}
};

#endif //TETRIS_SCOREVIEW_H
