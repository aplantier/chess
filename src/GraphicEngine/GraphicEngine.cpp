#include "GraphicEngine.hpp"

void GraphicEngine::drawBoard(const ChessBoard & board) {
	for( int i = BOARD_SIZE-1 ; i >= 0; i--){
		for( int j = 0 ; j< BOARD_SIZE ; j++){
			auto tileContent = board.getTileContent(j,i);
			if(tileContent->has_value()){
				std::cout<<"|";
				drawPiece(&tileContent->value());
			}
			else{
				std::cout<<"|"<<(isWhite(j,i)?' ':'x');
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
		case QUEEN:
			std::cout<<(char)((piece->color_)?'q':'Q');
			break;
		case ROOK:
			std::cout<<(char)((piece->color_)?'r':'R');
			break;
		case BISHOP:
			std::cout<<(char)((piece->color_)?'b':'B');
			break;
		case KNIGHT:
			std::cout<<(char)((piece->color_)?'c':'C');
			break;
		case PAWN:
			std::cout<<(char)((piece->color_)?'p':'P');
			break;
		default:
		std::cout<<'0';

	}
}
