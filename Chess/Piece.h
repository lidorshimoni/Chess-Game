#pragma once
#include "Position.h"
#include <string>
#include <iostream>
#include "Board.h"
#include <vector>

using namespace std;

class Board;
class Piece {
public:
	Piece(Position &pos, char type, int color, Board *board);
	virtual ~Piece();
	virtual vector<Position> getLeaglMoves() = 0;
	int move(Position pos);
	string placeToStr();
	void setPlace(Position &pos);
	int getColor();
	char getType();

protected:
	Position _place;
	char _type;
	int _color;
	Board * _board;

};