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

  public:
    Square(int row_, int col_, std::string tipo);
    int getLine();
    int getCol();
    int getType();
    void toString();
    friend std::ostream& operator<< (std::ostream& os, Square &sq){
      os << sq.type << std::endl;
    }
};


#endif

