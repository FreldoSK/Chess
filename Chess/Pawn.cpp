#include "Pawn.h"



Pawn::Pawn(uint16_t id) {
	this->position = "p";
	this->id = id;
}

std::string Pawn::getVisualized() {
	return this->position;
}

uint16_t Pawn::gedId() {
	return this->id;
}

void Pawn::setId(uint16_t id) {
	this->id = id; 
}






/*
Pawn::Pawn(Color color, Type type, std::string position) {
	this->color = color;
	this->type = type;
	this->position = position;
	this->figure = 'p';
}

char Pawn::getFigure() {
	return this->figure;
}

void Pawn::setFigure(char figure) {
	this->figure = figure;
}

Color Pawn::getColor() const {
	return this->color;
}

Type Pawn::getType() {
	return this->type;
}

std::string Pawn::getPosition() {
	return this->position;
}

void Pawn::move(std::string position) {
	this->position = position;
}

*/

