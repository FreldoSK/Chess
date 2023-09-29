#include "Field.h"

Field::Field(std::shared_ptr<Pawn>& pawn) {
	this->pawn = pawn;
}

std::shared_ptr<Pawn> Field::getPawn() {
	return this->pawn;
}

std::string Field::getVisualiseField() {
	return "#";
}

void Field::setVisualiseField(std::string field) {
	this->field = field; 
}


