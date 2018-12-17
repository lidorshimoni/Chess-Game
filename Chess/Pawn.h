#pragma once
#include "Position.h"
#include <string>
#include <iostream>
#include "Board.h"
#include <vector>

using namespace std;

class Pawn : public Piece
{
public:
	Pawn(Position pos, char type, int color, Board *board);
	~Pawn();
	vector<Position> getLeaglMoves();
};