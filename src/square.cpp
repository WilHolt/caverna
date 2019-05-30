#include "square.h"
//  Path,
// Wall,
// Begin,
// End

Square::Square(int row_, int col_, std::string tipo){
    if(tipo == "0"){
    type = Path;
    }
    if(tipo == "1"){
    type = Wall;

    }
        if(tipo == "2"){
    type = Begin;

    }
        if(tipo == "3"){
    type = End;

    }
 row = row_;
 col = col_;
}