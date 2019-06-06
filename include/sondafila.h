#ifndef _SONDAFILA_H_
#define _SONDAFILA_H_

#include "cave.h"
#include "square.h"

class SondaPilha{
private:
    Cave *cave;
    std::queue<Square*> paths;

public:
    SondaPilha(Cave *cave_){
        cave = cave_;
    }
    void clearNeighboor();
    bool isEmpty();
    bool nextPath();
    bool isFinished();
    void getPath();
    void step();

};
#endif