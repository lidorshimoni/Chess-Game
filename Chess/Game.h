#pragma once
#include "Board.h"
#include "Position.h"
#include <string>
#include <vector>
#include "King.h"

using namespace std;

class Game {
public:
	Game(string board);
	~Game();
	int makeTurn(string str);
	Position strToPoint(string strPlace);
	King* findKing(int type);

private:
	Board * board;
	int turn;

};