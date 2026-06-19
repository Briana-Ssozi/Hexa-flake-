#include "hexa.hpp"
#include <cmath>             // this is for math functions like cos()

using namespace std; 
// the VARIABLES

// this function draws ONE hexagon
// window: where to draw it
// x, y: center position of the hexagon
// size: how big the hexagon is
// colorNum: what color to use (0,1,2,3)
    
// recursive fuction:
// more: how many more levels to draw and  will gets smaller each time
// window: where to draw
// x, y: center position
// size: how big the hexagon

//will put all of our function togther so it csan be drawin
void drawHexagon(sf::RenderWindow& window, float x, float y, float size, int colorNum) {
    sf::CircleShape hex;
    hex.setPointCount(6);        // the makiing of the hexagon
    hex.setRadius(size);         // the size
    hex.setPosition(x, y);       // where it goes of the child   
    hex.setOrigin(size, size);   // middle  is the parent
    
    // will pick a color based on the number passed in by the time it recuse in the recusrive function
    if (colorNum == 0) {
        hex.setFillColor(sf::Color::Yellow);  // loevel 0
    } else if (colorNum == 1) {
        hex.setFillColor(sf::Color::Blue);    // level 1
    } else if (colorNum == 2) {
        hex.setFillColor(sf::Color::Green);   // level 2
    } else {
        hex.setFillColor(sf::Color::Red);     // level 3 and more
    }

    window.draw(hex);
}

//  this function will  calls itself and wont stop until each the requiment kinda like a while or a foor loop
void hexaflake(int more, sf::RenderWindow& window, float x, float y, float size) {
    // draw the center hexagon at the  location

    drawHexagon(window, x, y, size, more);

    // will check if  more is 0 if so dont draw.
    if (more == 0) {
        return;
    }

    // smaller hexagons are 1/3 of the parent
    float childSize = size / 3.0;
    
    // distance from center to where child hexagons will go  at cos(30) wich is .866
    float distance = (size + childSize) * 0.866;
    // these 6 positions make a hexagon shape and draw 6 hexagons
    
    //RIGHT PART
    // right 0 degrees
    hexaflake(more - 1, window, x + distance, y, childSize);
    
    // bottom-right 60 degrees
    hexaflake(more - 1, window, x + distance * 0.5, y + distance * 0.866, childSize);
        
    // will get  top-right in 300 degrees
    hexaflake(more - 1, window, x + distance * 0.5, y - distance * 0.866, childSize);
    
    // LEFT PART
    // bottom-left 120 degrees
    hexaflake(more - 1, window, x - distance * 0.5, y + distance * 0.866, childSize);
    
    // left 180 degrees
    hexaflake(more - 1, window, x - distance, y, childSize);

    // top-left  in 240 degrees
    hexaflake(more - 1, window, x - distance * 0.5, y - distance * 0.866, childSize);
}
