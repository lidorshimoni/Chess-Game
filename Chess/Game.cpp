#include "Game.h"

#define LETTER_ASCII 97
#define NUMBER_ASCII 49
#define SIZE 8

Game::Game(string board) 
{
	this->board = new Board(board);
	turn = board[SIZE * SIZE] - NUMBER_ASCII + 1; //65th element is turn
}

Game::~Game()
{
	delete board;
}

Position Game::strToPoint(string str)
{
	int x = str[0] - LETTER_ASCII; //letter to int
	int y = SIZE - 1 - (str[1] - NUMBER_ASCII); //number char to int
	return Position(x, y);
}

int Game::makeTurn(string move)
{
	Position src = strToPoint(move.substr(0, 2));
	Position dest = strToPoint(move.substr(2, 2));

	Piece* test = (*board)[src];
	if ((*board)[src] == nullptr || (*board)[src]->getColor() != turn)
	{
		return 2;
	}
	
	//Create vector of all enemy legal moves and check if the king is in them, after the possible move (use backup)
	

	int code = (*board)[src]->move(dest);
	if (code == 0 && findKing(turn == 0 ? 1 : 0)->isCheck()) 
	{
		code = 1;
	}
	if ((code == 0 || code == 1) && findKing(turn)->isCheck())
	{
		board->set(src, (*board)[dest]);
		board->set(dest, nullptr);
		code = 4;
	}
	if (code == 0 || code == 1)
	{
		turn = turn == 0 ? 1 : 0;
	}
	return code;
}

King* Game::findKing(int color)
{
	for (int y = 0; y < SIZE; y++)
	{
		for (int x = 0; x < SIZE; x++)
		{
			Piece* piece = (*board)[Position(x, y)];
			if (piece != nullptr && piece->getType() == 'k' && piece->getColor() == color)
			{
				return dynamic_cast<King*>((*board)[Position(x, y)]);
			}
		}
	}
}