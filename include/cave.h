#ifndef _CAVE_H_
#define _CAVE_H_
#include "square.h"
#include <sstream>
#include <fstream>
#include <stack>   
  class Cave{
    private:
      int caveRow;
      int caveCol;
      std::vector< std::vector<Square* > > table;
    public:
    Cave();
    void initTable(int row, int col);
    void load(std::string filename);
    std::vector<Square*> getNeighboor(Square* Actual);
    Square* getBegin();
    Square* getEnd();
    void reset();
    void toString();
    void getPath();
    void outCave(std::stack<Square *> out);
    bool allVisited();
  };

  #endif

