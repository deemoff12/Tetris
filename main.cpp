#include <iostream>
#include <SFML/Graphics.hpp>
#include "BoardView.h"
#include "Figures.h"
#include "FiguresView.h"
#include "FiguresController.h"
#include "IntroView.h"
#include "IntroController.h"
int main()
{
    srand(time(NULL));
    sf::RenderWindow window(sf::VideoMode(320, 480), "Tetris");
//    window.setFramerateLimit(4);
    Board board;
    BoardView board_view(window, board);
    Figures figures(board);
    FiguresView figures_view(window, figures, board);
    FiguresController figures_controller(window, figures, figures_view, board_view);
    IntroView intro_view(window);
    IntroController intro_controller(intro_view);

    window.setFramerateLimit(4);
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type==sf::Event::KeyPressed) {
                if (event.key.code==sf::Keyboard::Left) figures.move(-1);
                if (event.key.code==sf::Keyboard::Right) figures.move(1);
                if (event.key.code==sf::Keyboard::Up) figures.rotate();
                if (event.key.code==sf::Keyboard::Down) figures.step();
            }
            if (event.type==sf::Event::Closed) {
                window.close();
            }
        }
        figures.step();
//        std::cout << figures.getPunkt(3).x << std::endl;
        board_view.draw(window);
        figures_view.draw(window);
        window.display();
    }

    return 0;
}
