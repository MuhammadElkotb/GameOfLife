#pragma once
#include <array>
#include <SFML/Graphics.hpp>
#include "MACROS.H"

constexpr unsigned int ROW_NUM = 72;
constexpr unsigned int COL_NUM = 128;
constexpr unsigned int CELL_WIDTH = 10;


struct Cell {
	bool current_dead = false;
	bool last_dead = false;
	unsigned int row = 0;
	unsigned int col = 0;
	sf::RectangleShape* rect = nullptr;
};

struct Grid {
	Cell* cells[ROW_NUM][COL_NUM];
	Grid();
	~Grid();
	Cell* getCellByPosition(const unsigned int row, const unsigned int col);
};
class GridDrawer
{
private:
	
	Grid* grid;
	
public:

	GridDrawer(Grid* grid);
	~GridDrawer();

	void draw(sf::RenderWindow& window);
};

