#pragma once
#include "Field.h"
#include<vector>

class Board {
private:
	std::vector<std::vector<std::shared_ptr<Field>>> board; 
public:
	Board();
	void checkField();
};

