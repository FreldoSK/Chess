#pragma once


#define ID_INIT 0
#define TYPE_INIT Type::PAWN
#define COLOR_INIT Color::WHITE
#define MOVE_INIT false

#include <string>
enum class Type {
	PAWN, ROOK, KNIGHT, ARCHER, QUEEN, KING
};

enum class Color {
	BLACK, WHITE
};

class Pawn {

private:
	std::string position;
	uint16_t id; 
	bool firstMove; 

	Color color; 
	Type type;

public:
	Pawn(uint16_t id, Type type, Color color, bool firstMove);
	std::string getVisualized();
	uint16_t getId();
	void setId(uint16_t id);
	bool getFirtstMove();
	void setFirstMove(bool& move);

	Color getColor() const;
	Type getType();
	void setColor(const Color& color);
	void setType(const Type& type);
};




