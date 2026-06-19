#include "hexa.hpp"
#include <SFML/Graphics.hpp> // this is for drawing shapes and graphics
#include <iostream>          // this is for cin and cout
#include <cmath>             // this is for math functions like cos()

using namespace std;
        
int main(int argc, const char** argv) {
    // say hi to the user
    cout << "Hii!!, let's draw some hexagons!!" << endl;
    cout << endl;

    // user  values for  hexaflake
    float length;
    int height;

    // tell the user what we're making
    cout << "lets put in the length:" <<endl;
    cin >> length;      // FIXED: was height, now length
    
    cout << " now the height: "<<endl;
    cin >> height;      // FIXED: was length, now height

    // this will create the window by making it 800 length, 800 height and the name of the window
    sf::RenderWindow window(sf::VideoMode(800, 800), "Hexaflake!");
     
    // since the window is 800x800 and half of that is 400 for the center window
    float centerX = 400;
    float centerY = 400;

    // will keep window open until user closes it
    while (window.isOpen()) {
    
        // will check for mouse clicks, key presses
        sf::Event event;

        // if user clicks the exit button then close the window
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }
    
        // erases the previous frame
        window.clear(sf::Color::White);
    
        // this will draw the hexaflake
        // FIXED: height goes first (depth), length goes last (size)
        hexaflake(height, window, centerX, centerY, length);

        // display what we drew on the screen
        window.display();
    }
    
    return 0;
}
