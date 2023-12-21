#ifndef GRAPHIC_ENGINE_HPP
#define GRAPHIC_ENGINE_HPP
#define BOARD_SIZE 8
#include"../ChessBoard/ChessBoard.hpp"

class GraphicEngine{


	bool colors_[BOARD_SIZE][BOARD_SIZE]={
		{true,false,true,false,true,false,true,false},
		{false,true,false,true,false,true,false,true},
		{true,false,true,false,true,false,true,false},
		{false,true,false,true,false,true,false,true},
		{true,false,true,false,true,false,true,false},
		{false,true,false,true,false,true,false,true},
		{true,false,true,false,true,false,true,false},
		{false,true,false,true,false,true,false,true},
	};
	bool isWhite(int x, int y);

	public:
	void drawBoard(const ChessBoard & board);

};

#endif
