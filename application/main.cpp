#include <iostream>
#include <fstream>
#include "cave.h"
#include "sondapilha.h"



int main(int argc, char const *argv[])
{	
	Cave * Cave_ = new Cave();
	std::cout<<argv[1];
	Cave_->load(argv[1]);
	SondaPilha sonda(Cave_);
	Cave_->toString();
	sonda.step();
}