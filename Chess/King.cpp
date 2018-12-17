#include "King.h"
#include "Position.h"
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

King::King(Position pos, char type, int color, Board *board) : Piece(pos, type, color, board)
{

}

King::~King() {

}

vector<Position> King::getLeaglMoves() {
	vector<Position> v;
	Position pos(_place.getX(), _place.getY());
	for (int i = -1; i <= 1; i++)
	{
		for (int j = -1; j <= 1; j++)
		{
			pos.setX(_place.getX() + i);
			pos.setY(_place.getY() + j);
			if (pos.inBoard() && !(pos == _place) && ((*_board)[pos] == nullptr || (*_board)[pos]->getColor() != _color))
			{
				v.push_back(pos);
			}
		}
	}
	return v;
}

bool King::isCheck() {
	Position pos(0, 0);
	vector<Position> v;
	for (int i = 0; i <= 7; i++) {
		pos.setX(i);
		for (int j = 0; j <= 7; j++) {
			pos.setY(j);
			if ((*_board)[pos] != nullptr && (*_board)[pos]->getColor() != _color) {
				v = (*_board)[pos]->getLeaglMoves();
				if (find(v.begin(), v.end(), _place) != v.end()) {
					return true;
				}
			}
		}
	}
	return false;
};
