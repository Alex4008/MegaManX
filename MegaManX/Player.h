#include <SFML\Graphics.hpp>
#include <cmath>
#include <iostream>
#include <vector>
#include <numeric>
#include <chrono>
#include <math.h>


#include "current_time.h"

using namespace std;

class Player {
public:
	sf::Texture texture;
	sf::Vector2f pos;
	sf::Sprite x;

	void loadSprite(string, sf::IntRect);
	sf::Sprite getSprite();
	

	Player() {
		pos = sf::Vector2f(0, 0);
	}
};