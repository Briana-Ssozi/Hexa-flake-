#ifndef HEXA_HPP
#define HEXA_HPP

#include <SFML/Graphics.hpp>

// this function draws ONE hexagon
void drawHexagon (sf::RenderWindow& window, float x, float y, float size, int colorNum);

// recursive function - calls itself to draw the hexaflake
void hexaflake(int more, sf::RenderWindow& window, float x, float y, float size);

#endif
