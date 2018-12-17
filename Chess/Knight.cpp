#include "Knight.h"
#include "Position.h"
#include <vector>
#include <iostream>

using namespace std;

Knight::Knight(Position pos, char type, int color, Board *board) : Piece(pos,type,color,board)
{

}

Knight::~Knight() {

}

vector<Position> Knight::getLeaglMoves() {
	vector<Position> v;
	Position pos(_place.getX() - 2, _place.getY() + 1);
	if ((*_board)[pos] == nullptr || (*_board)[pos]->getColor() != _color)
		v.push_back(pos);
	
	pos.setX(_place.getX() - 2);
	pos.setY(_place.getY() - 1);
	if (pos.inBoard() && ((*_board)[pos] == nullptr || (*_board)[pos]->getColor() != _color))
		v.push_back(pos);
	
	pos.setX(_place.getX() + 2);
	pos.setY(_place.getY() - 1);
	if (pos.inBoard() && ((*_board)[pos] == nullptr || (*_board)[pos]->getColor() != _color))
		v.push_back(pos);
	
	pos.setX(_place.getX() + 2);
	pos.setY(_place.getY() + 1);
	if (pos.inBoard() && ((*_board)[pos] == nullptr || (*_board)[pos]->getColor() != _color))
		v.push_back(pos);
	
	pos.setX(_place.getX() + 1);
	pos.setY(_place.getY() - 2);
	if (pos.inBoard() && ((*_board)[pos] == nullptr || (*_board)[pos]->getColor() != _color))
		v.push_back(pos);
	
	pos.setX(_place.getX() + 1);
	pos.setY(_place.getY() + 2);
	if (pos.inBoard() && ((*_board)[pos] == nullptr || (*_board)[pos]->getColor() != _color))
		v.push_back(pos);
	
	pos.setX(_place.getX() - 1);
	pos.setY(_place.getY() - 2);
	if (pos.inBoard() && ((*_board)[pos] == nullptr || (*_board)[pos]->getColor() != _color))
		v.push_back(pos);
	
	pos.setX(_place.getX() - 1);
	pos.setY(_place.getY() + 2);
	if (pos.inBoard() && ((*_board)[pos] == nullptr || (*_board)[pos]->getColor() != _color))
		v.push_back(pos);

	return v;
}