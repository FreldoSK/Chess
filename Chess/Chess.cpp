#include "Board.h"


int main() {
    std::cout << "Chess Game !" << std::endl;

    std::unique_ptr<Board> board = std::make_unique<Board>();
    board->checkField();
    
}

