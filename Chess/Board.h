#pragma once
#include "Field.h"
#include<vector>

class Board {
private:
	std::vector<std::vector<std::shared_ptr<Field>>> board; 


	std::shared_ptr<Field> findById(uint16_t id);
	void removePawnByID(uint16_t possitionX, uint16_t possitionY);
public:
	Board(std::shared_ptr<Field> field);
	void checkField();
	void setNewPosition(uint16_t id, uint16_t possitionX, uint16_t possitionY);
};

