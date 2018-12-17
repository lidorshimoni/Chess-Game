#pragma once
#include "Position.h"
#include <string>
#include <iostream>
#include "Board.h"
#include <vector>

using namespace std;

class Knight : public Piece
{
public:
	Knight(Position pos, char type, int color, Board *board);
	~Knight();
	vector<Position> getLeaglMoves();
};
