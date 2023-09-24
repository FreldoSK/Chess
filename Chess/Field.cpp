#include "Field.h"


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



















/*
Field::Field() {

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {

            char columnLetter = char(97 + j);

            fieldName[i][j] = columnLetter + std::to_string(8 - i);
        }
    }

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (i == 2) {
				this->pawn = std::make_shared<Pawn>(Color::WHITE, Type::PAWN, fieldName[i][j]);
			}

			if (i == 7) {
				this->pawn = std::make_shared<Pawn>(Color::BLACK, Type::PAWN, fieldName[i][j]);
			}
		}
	}

}

*/


