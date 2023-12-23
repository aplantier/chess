#include "ChessBoard.hpp"
ChessBoard::ChessBoard(){
	std::cout<<"ChessBoard"<<std::endl;
	createKing();
}


void ChessBoard::setupGame(){
}


Piece ChessBoard::pieceFactory(char piece,bool color){
	Piece temp(piece,color);
	return temp; 
}
void ChessBoard::createKing(){
	board_[2][1] = pieceFactory(KING,BLACK);
}

const std::optional<Piece> *  ChessBoard::getTileContent(int i,int j) const  {
	return &board_[i][j];
}
