#include <iostream>
#include <SFML/Graphics.hpp>
#include "BoardView.h"
#include "Figures.h"
#include "FiguresView.h"
int main()
{
    srand(time(NULL));
    sf::RenderWindow window(sf::VideoMode(320, 480), "Tetris");
    window.setFramerateLimit(4);
    Board board;
    BoardView board_view(window);
    Figures figures;
    FiguresView figures_view(window, figures, board);

    while (window.isOpen()) {

        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type==sf::Event::KeyPressed) {
                if (event.key.code==sf::Keyboard::Left) figures.move(-1);
                if (event.key.code==sf::Keyboard::Right) figures.move(1);
                if (event.key.code==sf::Keyboard::Up) figures.rotate();
            }
            if (event.type==sf::Event::Closed) {
                window.close();
            }
        }
        figures.fall();
        std::cout << figures.getPunkt(0).x << std::endl;
        window.clear(sf::Color::White);
        board_view.draw(window);
        figures_view.draw(window);
        window.display();
    }

    return 0;
}
