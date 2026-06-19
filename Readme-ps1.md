# PS2: Hexagon Fractal

## Contact
Name: Beriana Ssozi
Section: comp 4
Time to Complete: 2 days and half 

## Description
The goal of this project is to have the user create a pattern with a hexaflake. The user 
specifies the side length and recursion depth. The program creates a hexaflake fractal with a 
recursive function. Each hexagon is surrounded by 6 smaller hexagons, which are further 
subdivided until the user selects the desired depth.

## Features
My main issue with this code was getting the correct version of SFML. I had to uninstall and 
reinstall an old version. I had to calculate how to arrange the six hexagons around the center. 
The child hexagons are one-third the size of the parent. The distance from the center equals 
(parent size + child size) * 0.866 (cos(30 degrees)). To make the pattern more visible, I used 
different colors for each depth level: yellow in the center, blue for depth 1, green for depth 2, 
and red for depths 3 and deeper.

## Issues
Not really, only uninstalling and reinstalling SFML since lecture 4 was the whole setup on how to
do that. Once I got SFML 2.6 installed, the code worked fine. The hardest part was understanding
recursion and how the function calls itself 6 times each time to draw the smaller hexagons.



## Extra Credit
No, I did not do any extra credit.

## Acknowledgements
Last Thursday, I used a lecture to help with my design. I used the snowflake example from class 
as a template and changed the triangles to hexagons.
