#include "Board.h"



Board::Board(std::shared_ptr<Field> field) {
	const size_t size = 8;
	this->board.resize(size, std::vector<std::shared_ptr<Field>>(size));
	uint16_t id = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			this->board[i][j] = nullptr;

			if (i == 1) {
				this->board[i][j] = std::make_shared<Field>(std::make_shared<Pawn>(id, Type::PAWN, Color::BLACK, false));
				id++;
			}

			if (i == 6) {
				this->board[i][j] = std::make_shared<Field>(std::make_shared<Pawn>(id, Type::PAWN, Color::WHITE, false));
				id++;
			}
		}
	}
}


std::shared_ptr<Field> Board::findById(uint16_t id) {
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {

			if (this->board[i][j] != nullptr && this->board[i][j]->getPawn() != nullptr) {

				if (this->board[i][j]->getPawn()->getId() == id) {
					return this->board[i][j];
				}

			}
		}
	}
	return nullptr;
}

std::shared_ptr<Field> Board::getField(uint16_t possitionX, uint16_t possitionY) {
	return this->board[possitionX][possitionY];
}



void Board::removePawn(uint16_t id) {
	std::shared_ptr<Field> field = this->findById(id);

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {

			if (this->board[i][j] == field) {
				this->board[i][j] = nullptr;
			}

		}
	}
}

void Board::setNewPosition(uint16_t id, uint16_t possitionX, uint16_t possitionY) {

	
	std::shared_ptr<Field> foundField = this->findById(id);
	this->removePawn(id);

	if (foundField != nullptr) {
		this->board[possitionX][possitionY] = foundField;
	} else {
		std::cout << "Field with id " << id << " not found!" << std::endl;
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


void Board::makeMove(uint16_t id, uint16_t possitionX, uint16_t possitionY) {

	std::shared_ptr<Field> fieldPawn = this->findById(id);
	std::shared_ptr<Pawn> pawn = fieldPawn->getPawn();

	switch (pawn->getType())
	{
	case Type::PAWN:

		if (pawn->getColor() == Color::WHITE) {
			if (possitionX)


	

		}


		break;
	case Type::ROOK:
		break;
	case Type::KNIGHT:
		break;
	case Type::ARCHER:
		break;
	case Type::QUEEN:
		break;
	case Type::KING:
		break;
	default:
		break;
	}
}
