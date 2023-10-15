#pragma once
#define ID_INIT 0
#define TYPE_INIT Type::PAWN
#define COLOR_INIT Color::WHITE
#define MOVE_INIT false
#include <string>


enum class Type {
	PAWN, ROOK, KNIGHT, ARCHER, QUEEN, KING
};

enum class Color {
	BLACK, WHITE
};

class Pawn {

private:
	std::string position;
	uint16_t id; 
	bool firstMove; 

	Color color; 
	Type type;

public:
	Pawn(uint16_t id, Type type, Color color, bool firstMove);
	std::string getVisualized();
	uint16_t getId();
	void setId(uint16_t id);
	bool getFirtstMove();
	void setFirstMove(bool& move);

	Color getColor() const;
	Type getType();
	void setColor(const Color& color);
	void setType(const Type& type);
};

/*
https://www.researchgate.net/publication/227692003_Two_decades_of_urban_climate_research_A_review_of_turbulence_exchanges_of_energy_and_water_and_the_urban_heat_island
https://www.scirp.org/pdf/AJCC_2013121210043959.pdf
https://www.citiq.cz/senzor-teploty-povrchu
https://www.sciencedirect.com/science/article/pii/S2210670723002251 senzor 
https://www.mdpi.com/1424-8220/9/4/2647 zelenÈ plochy
https://www.ncbi.nlm.nih.gov/pmc/articles/PMC6068537/ 15 cm pod zemou
https://www.sciencedirect.com/science/article/pii/S2214509523001870 2x 15 cm pod zemou
https://www.sciencedirect.com/science/article/pii/S2214157X21000940 do 40 cm pod povrch 
https://www.sensorsportal.com/HTML/DIGEST/february_2014/Vol_164/P_1839.pdf toto je asi blbosù
https://www.sciencedirect.com/science/article/pii/S2214317320301852 musÌ byù menej ako jeden meter 
Research on Urban Heat-island Effect
Li Yanga,b,*, Feng Qiana,b, De-Xuan Songa,b, Ke-Jia Zhenga,
*/


