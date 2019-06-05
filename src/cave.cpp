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
    caveRow = row;
    caveCol = col;
    // std::cout << row;
    // std::cout << col; 
    initTable(row, col);
    while(count<row+2){
    std::stringstream stemp;    
        if(count > 0){      
            getline(in, line);
            stemp << line;      
        int row_inside= 0;
        std::vector<Square*> temp;        
        while(stemp >>  obj){
             Square * novo = new Square(count,row_inside, obj);
             temp.push_back(novo);
             row_inside++;
        }
        table.push_back(temp);
        };
        count++;
        stream.str("");        
        
    };

        for ( const std::vector<Square*> &v : table )
        {
           std::cout << std::endl;           
           for ( auto x : v ) std::cout << *x << ' ';
        }
    }



    Square* Cave::getBegin(){
        for ( const std::vector<Square*> &v : table )
        {
           std::cout << std::endl;           
           for ( auto x : v ) {if(x->getType() == 2) return x;};
        }
    }
    Square* Cave::getEnd(){
        for ( const std::vector<Square *> &v : table )
        {
           std::cout << std::endl;           
           for ( auto x : v ) {if(x->getType() == 3) return x;};
        }
    }

    void Cave::getPath(){
        // std::stack<Square> PATH;
        // Square begin = getBegin();              
        // Square end = getEnd();
        // PATH.push(begin);
        // std::vector<Square> neighboors = getNeighboor(PATH.top());
        // while(PATH.top() != end){
        // int randomic = (rand()%5)+1;
        // if(neighboors[randomic].getType() == Path && neighboors[0].getStatus() == false ){
        //     PATH.push(neighboors[randomic]);
        // }
        // // }else if(neighboors[1].getType() == Path && neighboors[1].getStatus() == false ){
            
        // // }else if(neighboors[2].getType() == Path && neighboors[2].getStatus() == false ){
            
        // // }else if(neighboors[3].getType() == Path && neighboors[3].getStatus() == false ){
            
        // // }else{
        // //     PATH.pop();
        // // }    
        // }

        

        // if(PATH.top() == end){
        //     // outCave(PATH);
        // }
        // // for(int i= 0; i< neighboors.size();i++){
        // //     if(neighboors[i].getType() == Path && neighboors[i].getStatus() == false ){
        // //         PATH.push(neighboor);
        // //         }
        // // }
     
    }

   std::vector<Square*> Cave::getNeighboor(Square* actual){
        std::vector<Square*> neighboors;
        for(int side = 0; side < 4; side++){
                if(side == 0){
            //left
        Square* vizinho = new Square(actual->getRow(), actual->getCol()-1,actual->getType());
        for ( const std::vector<Square *> &v : table ){
            std::cout << std::endl;           
            for ( auto x : v ) {
            if(x->getRow() == actual->getRow()
               && x->getCol() == (actual->getCol()-1)
               && x->getType() == actual->getType())
               {
                    neighboors.push_back(x);
               }
        };
        }
        }
        // if(side == 1){
        //     //right
        // Square neighboor(actual.getRow(), actual.getCol()+1,actual.getType()); 
        // neighboors.push_back(neighboor);
        
        // }
        // if(side == 2){
        //     //up
        // Square neighboor(actual.getRow()-1, actual.getCol(),actual.getType()); 
        // neighboors.push_back(neighboor);
        
        // }
        // if(side == 3){
        //     //down
        // Square neighboor(actual.getRow()+1, actual.getCol(),actual.getType()); 
        // neighboors.push_back(neighboor);
         
        // }
        
        }
        for(int i = 0; i< 4; i++){
            std::cout<<*neighboors[i]<<'\n';
        }
        return neighboors;
    }
    
    void Cave::outCave(std::stack<Square* > out){
        std::cout<<"ACHOU UM CAMINHO";
        for(unsigned int i = 0 ; i< out.size(); i++){
             std::cout<< "[" << out.top()->getRow()<<','<< out.top()->getCol()<<']';
             out.pop();
        }
    }
    void Cave::toString(){
        for ( const std::vector<Square*> &v : table )
        {
           std::cout << std::endl;           
           for ( auto x : v ){
                if(x->getType() == 0){
                    std::cout << '_';
                }
                if(x->getType() == 1){
                    std::cout << '#';
                }
                if(x->getType() == 2){
                    std::cout << 'I';
                }
                if(x->getType() == 3){
                    std::cout << 'F';
                }
           }
          
        }
    }
    bool Cave::allVisited(){
        bool ok = false;
        for ( const std::vector<Square *> &v : table )
        {
           std::cout << std::endl;           
           for ( auto x : v ) {
               if(x->getType() == 0 && x->getStatus() == true){
                   ok = true;
               }
               else{
                   ok = false;
                }
            };
        };
        return ok;
    }