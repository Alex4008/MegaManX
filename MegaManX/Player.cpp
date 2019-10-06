#include <SFML\Graphics.hpp>
#include <cmath>
#include <iostream>
#include <vector>
#include <numeric>
#include <chrono>
#include <math.h>

#include "Player.h"
#include "current_time.h"

using namespace std;
using namespace sf;

void Player::render(sf::RenderWindow& w, string textureLoc) {
	texture.loadFromFile(textureLoc, sf::IntRect(pos.x, pos.y, 29, 35));
	x.setTexture(texture);
	x.setScale(4, 4);
	w.draw(x);
}

void Player::tick(Keyboard keyboard) {
	if (keyboard.isKeyPressed(Keyboard::Right)) {
		x.move(2.5, 0);
		pos.x += 6;
		if (pos.x >= texture.getSize().x) {
			pos.x = 0;
		}
	}
	else if (keyboard.isKeyPressed(Keyboard::Left)) {
		x.move(-2.5, 0);
	}
	else if (keyboard.isKeyPressed(Keyboard::Up)) {
		x.move(0, -1);
	}
	else if (keyboard.isKeyPressed(Keyboard::Down)) {
		x.move(0, 1);
	}
}


