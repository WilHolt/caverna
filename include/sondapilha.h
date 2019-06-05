#ifndef _SONDAPILHA_H_
#define _SONDAPILHA_H_

#include "cave.h"
#include "square.h"

class SondaPilha{
private:
    Cave *cave;

public:
    SondaPilha(Cave *cave_){
        cave = cave_;
    }
    void clearNeighboor();
    bool isEmpty(std::stack<Square*> stack);
    bool nextPath();
    bool isFinished();
    void getPath();
    void step();

};
#endif