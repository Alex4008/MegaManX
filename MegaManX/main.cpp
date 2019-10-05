#include <SFML\Graphics.hpp>
#include <cmath>
#include <iostream>
#include <vector>
#include <numeric>
#include <chrono>

#include "current_time.h"

using namespace std;
using namespace std::chrono;

string version = "0.0";
string title = "Mega Man X v" + version + " - Created By Alex Gray and Bryan Hayes";
bool devMode = true;

void init() {
	// Setup stuff here

}


int main()
{
	init();
	//long lastTime = static_cast<long> (std::chrono::high_resolution_clock::now());
	double ticksPerSecond = 60.0;
	double ns = 1000000000 / ticksPerSecond;
	double delta = 0;

	int updates = 0;
	int frames = 0;
	long timer = static_cast<long> (time(NULL));

	double frameDelta = 0;
	double frameNS = 1000000000 / 60;

	while (true) {
		long now = static_cast<long> (time(NULL));
		delta += (now - lastTime) / frameNS;
	}

	sf::RenderWindow window(sf::VideoMode(1024, 976), title); // Resolution is the Mega Man X on SNES but increased 4 times
	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Green);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		window.draw(shape);
		window.display();
	}

	return 0;
}