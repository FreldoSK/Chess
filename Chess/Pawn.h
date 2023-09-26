#pragma once
#include <string>


/*
typedef enum {
	PAWN, ROOK, KNIGHT, ARCHER, QUEEN, KING
} Type;

typedef enum {
	BLACK, WHITE
} Color; 

class Pawn {
private:
	Color color;
	Type type;
	std::string position;
	char figure;
public:
	Pawn(Color color, Type type, std::string position);
	Color getColor() const;
	Type getType();
	std::string getPosition();
	char getFigure();
	void setFigure(char figure);
	void move(std::string position);
};
*/

class Pawn {
private:
	std::string position;
public:
	Pawn();
	std::string getPosition();
};




