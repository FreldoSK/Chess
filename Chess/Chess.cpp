#include "Board.h"


int main() {
    std::cout << "Chess Game !" << std::endl;
    std::shared_ptr<Pawn> pawn = std::make_shared<Pawn>();
    std::shared_ptr<Field> field = std::make_shared<Field>(pawn);
    std::unique_ptr<Board> board = std::make_unique<Board>(field);
    board->checkField();
    
}

