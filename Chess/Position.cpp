#include "Position.h"

Position::Position(int x, int y) {
	this->_x = x;
	this->_y = y;
}

Position::~Position() {

}

int Position::getX() {
	return _x;
}

int Position::getY() {
	return _y;
}

void Position::setX(int x) {
	this->_x = x;
}

void Position::setY(int y) {
	this->_y = y;
}

bool Position::operator==(Position pos) {
	return (_x == pos.getX()) && (_y == pos.getY());
}

bool Position::inBoard() {
	return _x >= 0 && _y >= 0 && _x <= 7 && _y <= 7;
}