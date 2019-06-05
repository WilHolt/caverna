#ifndef _SQUARE_H_
#define _SQUARE_H_
#include <iostream>
#include <sstream>
#include <vector>
#include <string> 
#include <cstdlib>
#include <fstream>
typedef enum type{
  Path,
  Wall,
  Begin,
  End
}Type;
class Position{
  public:
  int line;
  int col;
  public:
  Position(int line_, int col_);
};

class Square{
  private:
    int type;
    int row;
    int col;
    bool visited;
    Square *back;

  public:

    Square(int row_, int col_, int tipo);
    int getRow();
    int getCol();
    int getType(){
      return type;
    }
    void toString();
    friend std::ostream& operator<< (std::ostream& os, Square &sq){
      os << "type: "<< sq.getType() <<"Position: ["<<sq.getCol() <<','<< sq.getRow()<<']';
      return os;
    }
    bool operator== ( Square &nSquare)const {
      return nSquare.getRow() == row && nSquare.getCol() == col  && nSquare.getType() == type;
    }
    bool operator!= ( Square &nSquare)const {
      return nSquare.getRow() != row && nSquare.getCol() != col  && nSquare.getType() != type;
    }
    
    void setVisited();
    bool getStatus();
    void setBack(Square* back_);  
};

    // friend void operator=(Square &sq){
    //   type = sq.type;
    //   row = sq.row;
    //   col = sq.col;
    // }



#endif

