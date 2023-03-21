#/*please*/include<SFML\Graphics.hpp>
#/*please*/include "birb.h"
#include "Header.h"

/*please*/int main() {
/*please*/
/*please*/	//this next line is an array. Arrays are a lot like python lists.
/*please*/	int birbColor[] = { 255, 200, 200 }; //set up an array of colors to make your birb PINK!
/*please*/	int birbColor2[] = { 25, 200, 250 };
/*please*/	birb Alex(200, 600, birbColor); //instantiate 1 birb
			birb Bob(400, 600, birbColor2);
			flower flower1(300, 300);
			flower flower2(500, 200);
			flower flower3(600, 100);
/*please*/
/*please*/	sf::RenderWindow window(sf::VideoMode(800, 800), "Happy Spring!"); //set up game window
/*please*/
/*please*/
/*please*/	while (1) {//GAME LOOP OMG
/*please*/
/*please*/		Alex.draw(window);
				Bob.draw(window);
				flower1.draw(window);
				flower3.draw(window);
				flower2.draw(window);
/*please*/		window.display();
/*please*/		window.clear();
/*please*/
/*please*/		int randum = rand() % 100 + 1;
/*please*/		if (randum < 5) {
/*please*/			Alex.move();
/*please*/		}

/*please*/		int randum2 = rand() % 100 + 1;
/*please*/		if (randum2 < 5) {
	/*please*/		Bob.move();
}
/*please*/
/*please*/		int randum3 = rand() % 100 + 1;
/*please*/		if (randum3 < 5) {
	/*please*/		flower1.randcolor();
	flower2.randcolor();
	flower3.randcolor();
}
/*please*/
/*please*/	}
/*please*/}


