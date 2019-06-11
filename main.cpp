#include <iostream>
#include <SFML/Graphics.hpp>
#include "BoardView.h"
#include "Figures.h"
#include "FiguresView.h"
int main()
{
    sf::RenderWindow window(sf::VideoMode(320, 480), "Tetris");
    Board board;
    BoardView board_view(window);
    Figures figures;
    FiguresView figures_view(window, figures, board);

    while (window.isOpen())
    {

        sf::Event event;
        while (window.pollEvent(event))
        {

            if (event.type == sf::Event::Closed)
                window.close();
        }


        window.clear(sf::Color::Black);



        window.clear(sf::Color::White);
        board_view.draw(window);
        figures_view.draw(window);
        window.display();
    }

    return 0;
}
