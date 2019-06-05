#include "square.h"
//  Path,
// Wall,
// Begin,
// End

Square::Square(int row_, int col_, int tipo){
    if(tipo == 0){
    type = Path;
    }
    if(tipo == 1){
    type = Wall;

    }
        if(tipo == 2){
    type = Begin;

    }
        if(tipo == 3){
    type = End;

    }
 row = row_;
 col = col_;
}
int Square::getCol(){
    return col;
}
int Square::getRow(){
    return row;
}
void Square::setVisited(){
    visited = true;
}
bool Square::getStatus(){
    return visited;
}
void Square::setBack(Square* back_){
    back = back_;
}
void Square::toString(){
    // for (int l = 0; l < row; ++l) {
    //     for(int c = 0; c < col; c++){
    //        std::cout<< table[l][c]; 
    //        if(table[l][c].type == 0){
    //         cout
    //         co
    //         }
    //         if(table[l][c].type == 1){
    //         type = Wall;
        
    //         }
    //             if(table[l][c].type == 2){
    //         type = Begin;        
    //         }
    //             if(table[l][c].type == 3){
    //         type = End;
        
    //         }
    //     }; 
    //     std::cout<<std::endl;
    // }
}

