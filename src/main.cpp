#include <iostream>

#define BOARD_SIZE 8 	


#include "gameEngine/gameEngine.hpp"
#include "GraphicEngine/GraphicEngine.hpp"



int main( int argc, char ** argv){
	std::cout<<"hello world "<<std::endl;
	GraphicEngine graph; 
	graph.drawBoard(GameEngine::getInstance().getBoard());
	return 0; 
}

