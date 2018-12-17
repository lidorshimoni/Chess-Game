#pragma once
#include "Position.h"
#include <string>
#include <iostream>
#include "Board.h"
#include <vector>

using namespace std;

class Rook : virtual public Piece
{
public:
	Rook(Position pos, char type, int color, Board *board);
	virtual ~Rook();
	vector<Position> getLeaglMoves();
};
