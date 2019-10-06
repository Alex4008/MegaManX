#include <SFML\Graphics.hpp>
#include <cmath>
#include <iostream>
#include <vector>
#include <numeric>
#include <chrono>
#include <math.h>


#include "current_time.h"

using namespace std;
using namespace sf;

class Player {
private:
	sf::Texture texture;
	sf::Vector2f pos;
	sf::Sprite x;

public: 
	void render(sf::RenderWindow&, string);
	void tick(sf::Keyboard);
	
	Player() {
	}
};