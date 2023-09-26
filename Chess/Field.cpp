#include "Field.h"



Field::Field(std::shared_ptr<Pawn> pawn) {
	this->pawn = pawn;
}

std::shared_ptr<Pawn> Field::getPawn() {
	return this->pawn;
}

std::string Field::getVisualiseField() {
	return this->field;
}

void Field::setVisualiseField(std::string field) {
	this->field = field; 
}

std::shared_ptr<Field> Field::getField() {
	return this->field;
}

void Field::setField(std::shared_ptr<Field> field) {
	this->field = field;
}




/*


Field::Field(std::shared_ptr<Pawn> pawn, std::string fieldName) {
	this->pawn = pawn;
	this->fieldName = fieldName;
	this->isOccupate = false; 
}

bool Field::getIsOccupate() {
	return this->isOccupate;
}

std::shared_ptr<Pawn> Field::getFiggure() {
	return this->pawn;
}

std::string Field::getFieldName() {
	return this->fieldName;
}

void Field::setEmptyFigure() {
	return (void)nullptr;
}



*/
