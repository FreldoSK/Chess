#include "Board.h"


Board::Board(std::shared_ptr<Field> field) {
	const size_t size = 8;
	this->board.resize(size, std::vector<std::shared_ptr<Field>>(size));

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {

			this->board[i][j] = nullptr;

			if (i == 1 || i == 6) {
				this->board[i][j] = field;
			}
			
		}
	}
}
	

void Board::checkField() {
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (this->board[i][j] != nullptr && this->board[i][j]->getPawn() != nullptr) {
				std::cout << this->board[i][j]->getPawn()->getVisualized();
			}
			else {
				std::cout << ".";
			}
		}
		std::cout << "\n";
	}
}



