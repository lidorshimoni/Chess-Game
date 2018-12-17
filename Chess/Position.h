#pragma once


class Position {
public:
	Position(int x, int y);
	~Position();
	int getX();
	int getY();
	void setX(int x);
	void setY(int y);
	bool operator==(Position pos);
	bool inBoard();
private:
	int _x;
	int _y;

 };