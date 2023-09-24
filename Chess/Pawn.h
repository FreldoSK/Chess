#pragma once
#include <string>

typedef enum {
	PAWN, ROOK, KNIGHT, ARCHER, QUEEN, KING
} Type;

class Pawn {
private:
	std::string color;
	Type type;
public:
	Pawn(std::string color, Type type);
	std::string getColor();
	Type getType();
};





