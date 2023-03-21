#include"header.h"

//function definition for constructor
flower::flower(int x, int y) {
	xpos = x;
	ypos = y;
	color[0] = 50;
	color[1] = 150;
	color[2] = 0;
}

//function definition for draw
void flower::draw(sf::RenderWindow& window) {

	
	petal.setPosition(xpos + 22, ypos + 35);
	petal.setFillColor(sf::Color(50,150,0));
	petal.setSize(sf::Vector2f(15, 75));
	window.draw(petal); //first leg

	
	body.setRadius(30);
	body.setFillColor((sf::Color(color[0],color[1],color[2]))); //noticing accessing slots of an array is just like getting to slots of a list
	body.setPosition(xpos, ypos);
	window.draw(body);

}

void flower::randcolor() {
	color[0] = rand() % 255;
		color[1] = rand() % 255;
		color[2] = rand() % 255;
}
