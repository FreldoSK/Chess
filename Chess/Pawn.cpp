#include "Pawn.h"



Pawn::Pawn(uint16_t id, Type type, Color color, bool firstMove) {
	this->position = "p";
	this->id = id;
	this->type = type;
	this->color = color;
	this->firstMove = firstMove;
}

std::string Pawn::getVisualized() {
	return this->position;
}

uint16_t Pawn::getId() {
	return this->id;
}

void Pawn::setId(uint16_t id) {
	this->id = id; 
}

bool Pawn::getFirtstMove() {
	return this->firstMove;
}

void Pawn::setFirstMove(bool& move) {
	this->firstMove = move;
}

Color Pawn::getColor() const {
	return this->color;
}

Type Pawn::getType() {
	return this->type;
}

void Pawn::setColor(const Color& color) {
	this->color = color;
}

void Pawn::setType(const Type& type) {
	this->type = type;
}




