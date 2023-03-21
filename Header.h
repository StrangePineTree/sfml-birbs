#pragma once
#include<SFML/Graphics.hpp>

//class definition for birb
class flower {

private: //private stuff can only be seen/used by fellow class members

	//usually you keep variables private and functions public, but they can definitely not be that way too.
	int xpos;
	int ypos;
	int color[3];


	sf::RectangleShape petal;
	sf::CircleShape body;

public: //public stuff can be seen/used by errbody in the clurb

	//you *can* have the whole definitions here, but its best to have just the declarations unless they are super short
	flower(int x, int y); //parameterized constructor
	void draw(sf::RenderWindow& window);
	void randcolor();

};


