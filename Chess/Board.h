#pragma once
#include "Field.h"
#include<vector>

class Board {
private:
	std::vector<std::vector<std::shared_ptr<Field>>> board; 
public:
	Board(std::shared_ptr<Field> field);
	void checkField();
	std::shared_ptr<Field> getField();
	void setField(std::shared_ptr<Field> field);
};

