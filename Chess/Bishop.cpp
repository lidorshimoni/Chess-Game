#include "Bishop.h"
#include "Piece.h"

Bishop::Bishop(Position pos, char type, int color, Board *board): Piece(pos, type, color, board)
{

}

Bishop::~Bishop() {

}

vector<Position> Bishop::getLeaglMoves() {
	//Position pos(_place.getX(), _place.getY());
	//vector<Position> v;
	//for (int i = 1; pos.inBoard(); i++) {
	//	if (!(pos == _place) && (*_board)[pos] != nullptr) {
	//		if ((*_board)[pos]->getColor() != _color)
	//			v.push_back(pos);
	//		break;
	//	}
	//	v.push_back(pos);
	//	pos.setX(_place.getX() + i);
	//	pos.setY(_place.getY() + i);
	//}

	//pos.setX(_place.getX());
	//pos.setY(_place.getY());
	//for (int i = 1; pos.inBoard(); i++) {
	//	if (!(pos == _place) && (*_board)[pos] != nullptr) {
	//		if ((*_board)[pos]->getColor() != _color)
	//			v.push_back(pos);
	//		break;
	//	}
	//	v.push_back(pos);
	//	pos.setX(_place.getX() - i);
	//	pos.setY(_place.getY() - i);
	//}

	//pos.setX(_place.getX());
	//pos.setY(_place.getY());
	//for (int i = 1; pos.inBoard(); i++) {
	//	if (!(pos == _place) && (*_board)[pos] != nullptr) {
	//		if ((*_board)[pos]->getColor() != _color)
	//			v.push_back(pos);
	//		break;
	//	}
	//	v.push_back(pos);
	//	pos.setX(_place.getX() - i);
	//	pos.setY(_place.getY() + i);
	//}

	//pos.setX(_place.getX());
	//pos.setY(_place.getY());
	//for (int i = 1; pos.inBoard(); i++) {
	//	if (!(pos == _place) && (*_board)[pos] != nullptr) {
	//		if ((*_board)[pos]->getColor() != _color)
	//			v.push_back(pos);
	//		break;
	//	}
	//	v.push_back(pos);
	//	pos.setX(_place.getX() + i);
	//	pos.setY(_place.getY() - i);
	//}
	//return v;
}