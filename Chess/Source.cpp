#include "Pipe.h"
#include <iostream>
#include <thread>
#include "Game.h"

using namespace std;

int main()
{
	srand(time_t(NULL));

	
	Pipe p;
	bool isConnect = p.connect();
	
	string ans;
	while (!isConnect)
	{
		cout << "cant connect to graphics" << endl;
		cout << "Do you try to connect again or exit? (0-try again, 1-exit)" << endl;
		cin >> ans;

		if (ans == "0")
		{
			cout << "trying connect again.." << endl;
			Sleep(5000);
			isConnect = p.connect();
		}
		else 
		{
			p.close();
			return 0;
		}
	}
	

	char msgToGraphics[1024];
	// msgToGraphics should contain the board string accord the protocol
	// YOUR CODE

	string boardString = "rnbkqbnrpppppppp################################PPPPPPPPRNBKQBNR1";

	Game game = Game(boardString);

	strcpy_s(msgToGraphics, boardString.c_str()); 
	
	p.sendMessageToGraphics(msgToGraphics);   

	string msgFromGraphics = p.getMessageFromGraphics();

	while (msgFromGraphics != "quit")
	{

		int value = game.makeTurn(msgFromGraphics);
		strcpy_s(msgToGraphics, to_string(value).c_str());

		// return result to graphics		
		p.sendMessageToGraphics(msgToGraphics);   

		// get message from graphics
		msgFromGraphics = p.getMessageFromGraphics();
	}

	p.close();
	return 0;
}