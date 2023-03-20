#include<SFML/Graphics.hpp>
#include "birb.h"

int main() {

	//this next line is an array. Arrays are a lot like python lists.
	int birbColor[] = { 255, 200, 200 }; //set up an array of colors to make your birb PINK!

	birb Alex(200, 200, birbColor); //instantiate 1 birb

	sf::RenderWindow window(sf::VideoMode(800, 800), "Happy Spring!"); //set up game window


	while (1) {//GAME LOOP OMG

		Alex.draw(window);
		window.display();
	}
}


