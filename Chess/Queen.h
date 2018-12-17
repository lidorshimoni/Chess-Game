#pragma once
#include "Position.h"
#include <string>
#include <iostream>
#include "Board.h"
#include <vector>
#include "Bishop.h"
#include "Rook.h"

using namespace std;

class Queen : public Rook, public Bishop 
{
public:
	Queen(Position pos, char type, int color, Board *board);
	virtual ~Queen();
	vector<Position> getLeaglMoves();
};
