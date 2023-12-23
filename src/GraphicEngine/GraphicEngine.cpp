#include "GraphicEngine.hpp"

void GraphicEngine::drawBoard(const ChessBoard & board) {
	for( int i = BOARD_SIZE-1 ; i >= 0; i--){
		for( int j = 0 ; j< BOARD_SIZE ; j++){
			auto tileContent = board.getTileContent(i,j);
			if(tileContent->has_value()){
				std::cout<<"|";
				drawPiece(&tileContent->value());
			}
			else{
				std::cout<<"|"<<(isWhite(i,j)?' ':'x');
			}
		}
		std::cout<<'|'<<std::endl;
	}
	
}
bool GraphicEngine::isWhite(int x, int y){
	return colors_[x][y];
}
void GraphicEngine::drawPiece(const Piece *piece){
	switch(piece->type_){
		case KING:
			std::cout<<(char)((piece->color_)?'k':'K');
			break;
		default:
		std::cout<<'0';

	}
}
