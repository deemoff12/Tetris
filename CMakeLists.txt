cmake_minimum_required(VERSION 3.14)
project(Tetris)

set(CMAKE_CXX_STANDARD 14)
set(SFML_DIR "D:/Pobrane/SFML-2.5.1/lib/cmake/SFML")
find_package(SFML 2.5 COMPONENTS graphics window system)
add_executable(Tetris main.cpp Board.cpp Board.h Figures.cpp Figures.h BoardView.cpp BoardView.h FiguresView.cpp FiguresView.h GameManager.cpp GameManager.h IntroController.cpp IntroController.h IntroView.cpp IntroView.h ScoreView.cpp ScoreView.h ScoreController.cpp ScoreController.h)
target_link_libraries(Tetris sfml-graphics sfml-window sfml-system)