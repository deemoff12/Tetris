#include <iostream>
#include <SFML/Graphics.hpp>
#include "BoardView.h"
#include "Figures.h"
#include "FiguresView.h"
#include "FiguresController.h"
#include "IntroView.h"
#include "IntroController.h"
#include "ScoreView.h"
#include "ScoreController.h"
#include "GameManager.h"
int main()
{
    srand(time(NULL));
    sf::RenderWindow window(sf::VideoMode(320, 480), "Tetris");
//    sf::RenderWindow window(sf::VideoMode(700, 480), "Tetris");

//    window.setFramerateLimit(4);
    Board board;
    BoardView board_view(window, board);
    Figures figures(board);
    FiguresView figures_view(window, figures, board);
    FiguresController figures_controller(window, figures, figures_view, board_view);
    IntroView intro_view(window);
    IntroController intro_controller(intro_view);
    ScoreView score_view;
    ScoreController score_controller(score_view, window);
    GameManager gm(intro_controller, figures_controller, score_controller);

    window.setFramerateLimit(6);
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {

            gm.handleEvent(event);

            if (event.type==sf::Event::Closed) {
                window.close();
            }
        }
        if (gm.getGameState()==2) figures.step();
        gm.draw(window);
        window.display();
    }

    return 0;
}
