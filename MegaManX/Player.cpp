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

void Player::loadSprite(string texLocation, sf::IntRect startPos) {
	texture.loadFromFile(texLocation, startPos);
	x.setTexture(texture);
	x.setScale(4, 4);
}

sf::Sprite Player::getSprite() {
	return x;
}


