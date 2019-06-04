#include <iostream>
#include <fstream>
#include "cave.h"



int main(int argc, char const *argv[])
{	
	Cave Cave_;
	std::cout<<argv[1];
	Cave_.load(argv[1]);
	Cave_.getPath();
	Cave_.toString();
	
}