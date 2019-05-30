#ifndef _CAVE_H_
#define _CAVE_H_
#include "square.h"
#include <sstream>
#include <fstream>

  class Cave{
    private:
      std::vector< std::vector<Square> > table;
    public:
    Cave();
    void initTable(int row, int col);
    void load(std::string filename);
    void getNeighboor();
    Square getBegin();
    Square getEnd();
    void reset();
    void toString();
  };

  #endif

