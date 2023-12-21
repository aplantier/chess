#ifndef CHESSBOARD_HPP
#define CHESSBOARD_HPP
#include <optional>
#include <iostream>
#include <unordered_map>
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

class Piece {
	char type_;
	bool color_;
}; 
class ChessBoard{

	std::optional<Piece> board_[BOARD_SIZE][BOARD_SIZE];
	public:
	ChessBoard();
	~ChessBoard() = default;
};
#endif 
