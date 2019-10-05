#ifndef GAME_H
#define GAME_H

#include <SFML\Graphics.hpp>
#include <cmath>
#include <iostream>
#include <vector>
#include <numeric>
#include <chrono>

#include "current_time.h"

using namespace std;
using namespace sf;

class Game {
private:
	int currentFrames;
	int currentTicks;
	bool running = true;
	bool vSyncToggle = true;
	bool devMode = true;
	RenderWindow window;
	RectangleShape rect;
	string title;

public:
	Game(string);
	void tick();
	void render();
	void gameLoop();
	int getFrames();
	int getTicks();
	bool isRunning();
};
#endif //Game_h