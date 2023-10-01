#pragma once
#include <string>
#include "Board.h"
#define PAWN_INIT 0

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
	uint16_t id; 
	bool firtsMove; 
public:
	Pawn(uint16_t id);
	std::string getVisualized();
	uint16_t gedId();
	void setId(uint16_t id);
	bool getFirtstMove();
	void setFirstMove(bool move);
	void move(std::shared_ptr<Board> board);
};




