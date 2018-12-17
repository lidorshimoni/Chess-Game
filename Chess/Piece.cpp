#include "Piece.h"

using namespace std;

#define BOARD_MIN 0
#define BOARD_MAX 7

Piece::Piece(Position &p, char type, int color, Board *board) : _place(p)
{
	_type = type;
	_color = color;
	_board = board;
}

Piece::~Piece() {

}

int Piece::move(Position p) {
	if (p == _place) {
		return 7;
	}
	if (p.inBoard()) {
		if ((*_board)[p] == nullptr || (*_board)[p]->getColor() != _color) {
			vector<Position> v = this->getLeaglMoves();
			if (find(v.begin(), v.end(), p) != v.end()) {
				delete (*_board)[p];
				_board->set(p,this);
				_board->set(_place, nullptr);
				_place = p;
				return 0;
			}
			else {
				return 6;
			}
		}
		else {
			return 3;
		}
	}
	else {
		return 5;
	}
}

string Piece::placeToStr() {
	string s("a1");
	s[0] = _place.getX() + 'a';
	s[1] = _place.getY() + '1' - 1;
	return s;
}

void Piece::setPlace(Position &p) {
	_place = p;
}

int Piece::getColor() {
	return _color;
}

char Piece::getType() {
	return _type;
}