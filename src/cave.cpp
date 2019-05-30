#include "cave.h"
Cave::Cave(){
    
}

void Cave::initTable(int row, int col){
        for (int l = 0; l < row; ++l) {
            std::vector<Square> temp;
            for(int c = 0; c < col; c++){
                // Square novo(l,c,0);  
                //  temp.push_back(novo);
            };
            // table.push_back(temp);
        }

}
void Cave::load(std::string filename){
            std::cout << "okay";

    int count =0;
    std::ifstream in;
    std::string line;
    std::stringstream stream;
    // std::string row_;
    // std::string col_;
    int obj;
    int row,col;
    in.open (filename, std::ifstream::in);
    getline(in, line);
    stream << line;
    stream >> row >> col;  
    std::cout << row;
    std::cout << col; 
    initTable(row, col);
    while(count<row+2){
        if(count==0){
            // getline(in, line);
            // stream << line;
            // initTable(row, col);
        }
        if(count > 0){            
        int row_inside= 0;
        std::vector<Square> temp;        
        while(stream >>  obj){
             Square novo(count,row_inside, obj);
             temp.push_back(novo);
             row_inside++;
        }
        table.push_back(temp);
        };
        count++;
    };

        for ( const std::vector<Square> &v : table )
        {
           std::cout << std::endl;           
           for ( auto x : v ) std::cout << x << ' ';
        }
    }



    Square Cave::getBegin(){
        for ( const std::vector<Square> &v : table )
        {
           std::cout << std::endl;           
           for ( auto x : v ) {if(x.getType() == 2) return x};
        }
    }
    Square Cave::getEnd(){
        for ( const std::vector<Square> &v : table )
        {
           std::cout << std::endl;           
           for ( auto x : v ) {if(x.getType() == 3) return x};
        }
    }