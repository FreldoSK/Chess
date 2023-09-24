#pragma once
#include <string>

typedef enum {
	PAWN, ROOK, KNIGHT, ARCHER, QUEEN, KING
} Type;

class Figure {
private:
	std::string color;
	Type type;
public:
	Figure(std::string color, Type type);
	std::string getColor();
	Type getType();
};

class Pawn : public Figure {


};



