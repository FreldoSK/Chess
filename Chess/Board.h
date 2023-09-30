#pragma once
#include "Field.h"
#include<vector>

class Board {
private:
	std::vector<std::vector<std::shared_ptr<Field>>> board; 


	std::shared_ptr<Field> Board::getField(uint16_t Xposition, uint16_t Yposition);
	std::shared_ptr<Field> Board::setField(uint16_t newXposition, uint16_t newYposition);

public:
	Board(std::shared_ptr<Field> field);
	void checkField();
};

