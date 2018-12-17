#include "Rook.h"
#include "Position.h"

Rook::Rook(Position pos, char type, int color, Board *board) : Piece(pos,type,color,board)
{

}

Rook::~Rook() {

}

vector<Position> Rook::getLeaglMoves() {
	/*Position pos(_place.getX(), _place.getY());
	vector<Position> v;
	for (int i = _place.getY() ; i <= 7; i++) {
		pos.setY(i);
		if (!(pos == _place) && (*_board)[pos] != nullptr) {
			if ((*_board)[pos]->getColor() != _color) 
				v.push_back(pos);
			break;
		}
		v.push_back(pos);
	}
	pos.setY(_place.getY());
	for (int i = _place.getX() ; i <= 7; i++) {
		pos.setX(i);
		if (!(pos == _place) && (*_board)[pos] != nullptr) {
			if ((*_board)[pos]->getColor() != _color)
				v.push_back(pos);
			break;
		}
		v.push_back(pos);
	}
	pos.setX(_place.getX());
	for (int i = _place.getY(); i >= 0; i--) {
		pos.setY(i);
		if (!(pos == _place) && (*_board)[pos] != nullptr) {
			if ((*_board)[pos]->getColor() != _color)
				v.push_back(pos);
			break;
		}
		v.push_back(pos);
	}
	pos.setY(_place.getY());
	for (int i = _place.getX() ; i >= 0; i--) {
		pos.setX(i);
		if (!(pos == _place) && (*_board)[pos] != nullptr) {
			if ((*_board)[pos]->getColor() != _color)
				v.push_back(pos);
			break;
		}
		v.push_back(pos);
	}
	return v;*/
}