#include "Board.h"


Board::Board(std::shared_ptr<Field> field) {
	const size_t size = 8;
	this->board.resize(size, std::vector<std::shared_ptr<Field>>(size));

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (i == 2 || i == 7) {
				this->board[i][j] = field;
			}

			this->board[i][j] = nullptr;
		}
	}
}
	

void Board::checkField() {
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			std::cout << this->board[i][j]->getPawn()->getPosition();
		}
		std::cout << "\n";
	}
}



