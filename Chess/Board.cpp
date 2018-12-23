#include "Board.h"
#include "King.h"
#include "Queen.h"
#include "Rook.h"
#include "Knight.h"
#include "Bishop.h"
#include "Pawn.h"

Board::Board(string board)
{
	for (int i = 0; i < SIZE * SIZE; i++)
	{
		int x = i % SIZE;
		int y = i / SIZE;
		int color = 1;
		Position point = Position(x, y);
		Piece* piece;
		char c = board[i];
		if (c <= 'Z' && c >= 'A') {
			c += 'a' - 'A';
			color = 0;
		}
		switch (c) 
		{
		case 'k':
			piece = new King(point, 'k', color, this);
			break;
		case 'q':
			piece = new Queen(point, 'q', color, this);
			break;
		case 'r':
			piece = new Rook(point, 'r', color, this);
			break;
		case 'n':
			piece = new Knight(point, 'n', color, this);
			break;
		case 'b':
			piece = new Bishop(point, 'b', color, this);
			break;
		case 'p':
			piece = new Pawn(point, 'p', color, this);
			break;
		default:
			piece = nullptr;
		}
		this->_board[y][x] = piece;
	}
}

Board::~Board()
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			delete this->_board[i][j];
		}
	}
}

string Board::toStr()
{
	string output = "";
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			if (this->_board[i][j] == nullptr)
			{
				output += '#';
			}
			else
			{
				output += this->_board[i][j]->getType();
			}
		}
	}
	return output;
}

Piece* Board::operator[](Position pos) 
{
	return this->_board[pos.getY()][pos.getX()];
}

void Board::set(Position place, Piece* argument) 
{
	this->_board[place.getY()][place.getX()] = argument;
}