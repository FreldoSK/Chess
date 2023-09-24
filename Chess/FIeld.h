#pragma once
#include <iostream>
#include <memory>
#include "Pawn.h"


class Field {
private:
	std::string fieldName;
	std::shared_ptr<Pawn> pawn;
	bool isOccupate; 
public:
	Field(std::shared_ptr<Pawn> pawn, std::string fieldName);
	bool getIsOccupate(); 
	std::shared_ptr<Pawn> getFiggure();
	std::string getFieldName();
	void setEmptyFigure();
};

