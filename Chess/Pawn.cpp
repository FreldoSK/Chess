#include "Pawn.h"

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