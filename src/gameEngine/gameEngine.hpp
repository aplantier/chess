#ifndef GAME_ENGINE_HPP
#define GAME_ENGINE_HP
#include <iostream>
#include "../ChessBoard/ChessBoard.hpp"

class GameEngine {
	GameEngine()	=default;
	~GameEngine() 	=default;

	ChessBoard board_;

	public:
	GameEngine(const GameEngine&)	= delete;
	GameEngine& operator = (const GameEngine&)	= delete;
	static GameEngine& getInstance(){
		static GameEngine instance;
		std::cout<<"GameEnginecreated"<<std::endl;
		return instance;
	}


	const ChessBoard& getBoard();
};



#endif 
