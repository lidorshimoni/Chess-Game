#pragma once
#include "Position.h"
#include <string>
#include <iostream>
#include "Board.h"
#include <vector>

using namespace std;

class King : public Piece
{
public:
	King(Position pos, char type, int color, Board* board);
	~King();
	vector<Position> getLeaglMoves();
	bool isCheck();
};