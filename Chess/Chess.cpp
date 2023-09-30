#include "Board.h"


int main() {
    std::cout << "Chess Game !" << std::endl;

    std::shared_ptr<Pawn> pawn = std::make_shared<Pawn>(PAWN_INIT);
    std::shared_ptr<Field> field = std::make_shared<Field>(pawn);
    std::unique_ptr<Board> board = std::make_unique<Board>(field);


    for (;;) {

        board->checkField();
        uint16_t id, possitionX, possitionY; 
        std::cout << "Give me id !\n";
        std::cin >> id;
        
        std::cout << "Give me Xpossition !\n";
        std::cin >> possitionX;

        std::cout << "Give me Ypossition !\n";
        std::cin >> possitionY;

        board->setNewPosition(id, possitionX, possitionY);

    }


    
    
}

