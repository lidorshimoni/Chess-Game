#pragma once
#include "Piece.h"
#include "Position.h"
#include <string>

#define SIZE 8

class Piece;
class Board{
public:
	Board(std::string board);
	~Board();
	std::string toStr();
	Piece* operator[](Position pos);
	void set(Position place, Piece* argument);
private:
	Piece * _board[SIZE][SIZE];
};