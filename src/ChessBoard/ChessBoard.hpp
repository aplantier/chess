#ifndef CHESSBOARD_HPP
#define CHESSBOARD_HPP
#include <optional>
#include <iostream>
#include <vector>



#define BOARD_SIZE 8
#define A 0
#define B 1
#define C 2
#define D 3
#define E 4
#define F 5
#define G 6
#define H 7

#define KING 	0 
#define QUEEN 	1 
#define ROOK 	2 
#define BISHOP 	3 
#define KNIGHT	4
#define PAWN	5
#define WHITE true
#define BLACK false 
class Player;
struct Position{
	int x; 
	int y;
}; 
struct Piece {
	public:
	char type_;
	bool color_;
	Position pos_;
	Piece(int type,bool color): type_(type), color_(color){
		pos_.x=-1;
		pos_.y=-1;
	};
}; 
class ChessBoard{

	std::optional<Piece> board_[BOARD_SIZE][BOARD_SIZE];
	std::pair<Player*,std::vector<Piece*>> playerWhite_;
	std::pair<Player*,std::vector<Piece*>> playerBlack_;
	public:
	ChessBoard();
	~ChessBoard() = default;
	static Piece pieceFactory(char piece, bool color);
	void setupGame(Player *white, Player *black); 
 const std::optional<Piece> *  getTileContent(int i,int j) const;
void createKing();

};
#endif 
