#include "cave.h"
Cave::Cave(){
    
}
void Cave::initTable(int row, int col){
 table =  new Square**[row];
        for (int l = 0; l < row; ++l) {
            table[l] = new Square*[col];
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
    std::string obj;
    int row,col;
    in.open (filename, std::ifstream::in);
    while(!in.eof()){
        getline(in, line);
        stream << line;
        while(stream >>  obj){
        if(count == 1){
            std::cout << "okay";
            stream >> row >> col;
            initTable(row, col);
       
        }else{
            std::cout <<  obj <<std::endl;
            for(int i = 0; i < col; i++){
                Square* novo = new Square(count, i , obj);
                std::cout << *novo;
                // table[count][i] = novo;
            };

        }
        count++;
    }
}
}
