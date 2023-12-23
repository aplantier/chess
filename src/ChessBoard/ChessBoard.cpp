#include "ChessBoard.hpp"
ChessBoard::ChessBoard(){
	std::cout<<"ChessBoard"<<std::endl;
	struct initPiece {
		std::pair<int,int> pos;
		bool color; 
		char piece;
	};

	std::vector<initPiece> value ={
		{{0,1},WHITE,PAWN},
		{{1,1},WHITE,PAWN},
		{{2,1},WHITE,PAWN},
		{{3,1},WHITE,PAWN},
		{{4,1},WHITE,PAWN},
		{{5,1},WHITE,PAWN},
		{{6,1},WHITE,PAWN},
		{{7,1},WHITE,PAWN},
		{{0,0},WHITE,ROOK},
		{{1,0},WHITE,KNIGHT},
		{{2,0},WHITE,BISHOP},
		{{3,0},WHITE,QUEEN},
		{{4,0},WHITE,KING},
		{{5,0},WHITE,BISHOP},
		{{6,0},WHITE,KNIGHT},
		{{7,0},WHITE,ROOK},
		{{0,6},BLACK,PAWN},
		{{1,6},BLACK,PAWN},
		{{2,6},BLACK,PAWN},
		{{3,6},BLACK,PAWN},
		{{4,6},BLACK,PAWN},
		{{5,6},BLACK,PAWN},
		{{6,6},BLACK,PAWN},
		{{7,6},BLACK,PAWN},
		{{0,7},BLACK,ROOK},
		{{1,7},BLACK,KNIGHT},
		{{2,7},BLACK,BISHOP},
		{{3,7},BLACK,QUEEN},
		{{4,7},BLACK,KING},
		{{5,7},BLACK,BISHOP},
		{{6,7},BLACK,KNIGHT},
		{{7,7},BLACK,ROOK}
	};
	for( auto curs : value){
		board_[curs.pos.first][curs.pos.second] = pieceFactory(curs.piece,curs.color);
		if(curs.color) {
			playerWhite_.second.push_back(&board_[curs.pos.first][curs.pos.second].value());
		}
		else{
			playerBlack_.second.push_back(&board_[curs.pos.first][curs.pos.second].value());
		}
	}

/*
	board_[0][1] = pieceFactory(PAWN,WHITE);
	playerWhite_.second.push_back(&board_[0][1].value());
	board_[1][1] = pieceFactory(PAWN,WHITE);
	playerWhite_.second.push_back(&board_[1][1].value());
	board_[2][1] = pieceFactory(PAWN,WHITE);
	playerWhite_.second.push_back(&board_[2][1].value());
	board_[3][1] = pieceFactory(PAWN,WHITE);
	playerWhite_.second.push_back(&board_[3][1].value());
	board_[4][1] = pieceFactory(PAWN,WHITE);
	playerWhite_.second.push_back(&board_[4][1].value());
	board_[5][1] = pieceFactory(PAWN,WHITE);
	playerWhite_.second.push_back(&board_[5][1].value());
	board_[6][1] = pieceFactory(PAWN,WHITE);
	playerWhite_.second.push_back(&board_[6][1].value());
	board_[7][1] = pieceFactory(PAWN,WHITE);
	playerWhite_.second.push_back(&board_[7][1].value());
	board_[0][6] = pieceFactory(PAWN,BLACK);
	playerBlack_.second.push_back(&board_[0][6].value());
	board_[1][6] = pieceFactory(PAWN,BLACK);
	playerBlack_.second.push_back(&board_[1][6].value());
	board_[2][6] = pieceFactory(PAWN,BLACK);
	playerBlack_.second.push_back(&board_[2][6].value());
	board_[3][6] = pieceFactory(PAWN,BLACK);
	playerBlack_.second.push_back(&board_[3][6].value());
	board_[4][6] = pieceFactory(PAWN,BLACK);
	playerBlack_.second.push_back(&board_[4][6].value());
	board_[5][6] = pieceFactory(PAWN,BLACK);
	playerBlack_.second.push_back(&board_[5][6].value());
	board_[6][6] = pieceFactory(PAWN,BLACK);
	playerBlack_.second.push_back(&board_[6][6].value());
	board_[7][6] = pieceFactory(PAWN,BLACK);
	playerBlack_.second.push_back(&board_[7][6].value());
	*/
}


void ChessBoard::setupGame(Player *white, Player *black){
	playerWhite_.first= white ;
	playerWhite_.second.reserve(16);
	playerBlack_.first= white ;
	playerBlack_.second.reserve(16);
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
