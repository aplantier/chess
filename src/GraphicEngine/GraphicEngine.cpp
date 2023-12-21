#include "GraphicEngine.hpp"

void GraphicEngine::drawBoard(const ChessBoard & board){
	for( int i = BOARD_SIZE-1 ; i >= 0; i--){
		for( int j = 0 ; j< BOARD_SIZE ; j++){
			std::cout<<"|"<<(isWhite(i,j)?' ':'x');
		}
		std::cout<<'|'<<std::endl;
	}
	
}
bool GraphicEngine::isWhite(int x, int y){
	return colors_[x][y];
}
