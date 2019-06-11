#ifndef _SONDAPILHA_H_
#define _SONDAPILHA_H_

#include "cave.h"
#include "square.h"

class SondaFila{
private:
    Cave *cave;
    std::stack<Square*> paths;

public:
    SondaFila(Cave *cave_){
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