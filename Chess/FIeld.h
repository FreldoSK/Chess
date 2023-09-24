#pragma once
#include "Figure.h"
#include <memory>
#include <vector>

class Field {
private:
	const uint16_t size;
	std::vector<std::vector<std::shared_ptr<Figure>>> figurePtr;
public:
	Field(uint16_t size, std::vector<std::vector<std::shared_ptr<Figure>>> figurePtr);
	void checkField();
};

