#include "Queen.h"

Queen::Queen(Position pos, char type, int color, Board *board) : Rook(pos, type, color, board), Bishop(pos, type, color, board), Piece(pos, type, color, board) {}

Queen::~Queen() {}

vector<Position> Queen::getLeaglMoves() {
	vector<Position> v = this->Rook::getLeaglMoves();
	vector<Position> v2 = this->Bishop::getLeaglMoves();
	vector<Position> v3;
	v3.reserve(v.size() + v2.size());
	v3.insert(v3.end(), v.begin(), v.end());
	v3.insert(v3.end(), v2.begin(), v2.end());
	return v3;
}