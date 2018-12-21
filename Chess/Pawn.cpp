#include "Pawn.h"

Pawn::Pawn(Position pos, char type, int color, Board *board) : Piece(pos, type, color, board) {}

Pawn::~Pawn() {}

vector<Position> Pawn::getLeaglMoves() {
	vector<Position> v;
	Position pos(_place.getX(), _place.getY() + 1);
	if (_color == 0) 
		pos.setY(_place.getY() - 1);
	if ((*_board)[pos] == nullptr)
		v.push_back(pos);
	pos.setX(_place.getX() + 1);
	if ((*_board)[pos] != nullptr && (*_board)[pos]->getColor() != _color)
		v.push_back(pos);
	pos.setX(_place.getX() - 1);
	if ((*_board)[pos] != nullptr && (*_board)[pos]->getColor() != _color)
		v.push_back(pos);
	pos.setX(_place.getX());
	pos.setY(_place.getY() - 2);
	if ((*_board)[pos] == nullptr && _color == 0 && _place.getY ()== 6) {
		v.push_back(pos);
	}
	pos.setY(_place.getY() + 2);
	if ((*_board)[pos] == nullptr && _color != 0 && _place.getY() == 1) {
		v.push_back(pos);
	}
	return v;
}