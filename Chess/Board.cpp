#include "Board.h"


Board::Board() {
	this->board.resize(8, std::vector<std::shared_ptr<Field>>(8));

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			std::shared_ptr<Pawn> pawn = std::make_shared<Pawn>(Color::WHITE, Type::PAWN, "a2");


			if (i == 2) {
			   this->board[i][j] = std::make_shared<Field>(pawn, "a2");
			}
			
	
		}
	}

}
	

void Board::checkField() {
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			std::cout << this->board[i][j].get()->getFieldName() << " " << std::endl;
		}
		std::cout << "\n";
	}
}






/*



void checkField() {
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			std::cout <<  << " ";
		}
		std::cout << std::endl;
	}
}

*/