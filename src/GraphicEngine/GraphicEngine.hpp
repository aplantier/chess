#ifndef GRAPHIC_ENGINE_HPP
#define GRAPHIC_ENGINE_HPP
#include"../ChessBoard/ChessBoard.hpp"

#define BOARD_SIZE 8

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
	void drawPiece(const Piece *piece);

};

#endif
