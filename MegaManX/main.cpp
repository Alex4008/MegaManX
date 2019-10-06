#include <SFML\Graphics.hpp>
#include <cmath>
#include <iostream>
#include <vector>
#include <numeric>
#include <thread>    

#include "Game.h"

using namespace std;

string version = "0.0";
string title = "Mega Man X v" + version + " - Created By Alex Gray and Bryan Hayes";

void start() {
	cout << "Starting" << endl;
	Game theGame(title, version);
	theGame.gameLoop();
}

int main()
{
	thread theThread(start);

	theThread.join();

	return 0;
}