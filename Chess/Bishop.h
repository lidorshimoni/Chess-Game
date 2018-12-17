#pragma once
#include "Position.h"
#include <string>
#include <iostream>
#include "Board.h"
#include <vector>

using namespace std;

class Bishop : virtual public Piece
{
public:
	Bishop(Position pos, char type, int color, Board *board);
	~Bishop();
	vector<Position> getLeaglMoves();
};
