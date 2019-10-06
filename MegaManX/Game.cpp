#include "Game.h"
#include "Player.h"

Player x;

Game::Game(string title = "") {
	running = true;
	this->title = title;
	window.create(sf::VideoMode(1024, 976), title); // Resolution is the Mega Man X on SNES but increased 4 times
	rect.setPosition(Vector2f(10, 10));
	rect.setSize(Vector2f(200, 100));
	rect.setFillColor(Color::Red);
}

void Game::tick() {
	cout << "Ticking" << endl;
	Event e;
	while (Game::window.pollEvent(e)) {
		if (e.type == Event::Closed) {
			Game::window.close();
		}
	}
}

void Game::render() {
	cout << "Rendering" << endl;
	Game::window.clear();
	x.render(Game::window, "C:\\Users\\Bryan\\Desktop\\Desktop\\MegaManx\\MegaManX\\MegaMan X Sprites\\megaman.png");
	x.tick(keyboard);
	//Game::window.draw(rect);
	Game::window.display();
}

void Game::gameLoop() {
	cout << "Starting Loop" << endl;
	CurrentTime current_time;
	uint64_t lastTime = (current_time.nanoseconds());
	double ticksPerSecond = 60.0;
	double ns = 1000000000 / ticksPerSecond;
	double delta = 0;

	int updates = 0;
	int frames = 0;
	uint64_t timer = (current_time.milliseconds());

	double frameDelta = 0;
	double frameNS = 1000000000 / 60;

	while (Game::window.isOpen() && running) {
		uint64_t now = (current_time.milliseconds());
		delta += (now - lastTime) / frameNS;
		frameDelta += (now - lastTime) / frameNS;
		lastTime = now;
		if (delta >= 1) {
			tick();
			updates++;
			delta--;
		}

		if (vSyncToggle == true) {
			// For when you want the frame rate locked to 60
			if (frameDelta >= 1) {
				render();
				frames++;
				frameDelta--;
			}
		}
		// For if you don't want the frame rate locked to 60
		else {
			render();
			frames++;
			frameDelta = 0;
		}

		if (current_time.milliseconds() - timer > 1000) {
			timer += 1000;
			currentTicks = updates;
			currentFrames = frames;
			updates = 0;
			frames = 0;

		}
	}
}

int Game::getFrames() {
	return currentFrames;
}

int Game::getTicks() {
	return currentTicks;
}

bool Game::isRunning() {
	return running;
}