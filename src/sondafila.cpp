#include "sondafila.h"



void SondaFila::step(){
    Square* begin = cave->getBegin();    
    paths.push(begin);
   if(isEmpty()){

   }else{
       if(paths.top()->getType()== 3){
        std::cout<<"fim";
            while(!paths.empty()){
                paths.pop();
            }
       }else{
          while(!isEmpty()){
                std::vector<Square*> neighboors = cave->getNeighboor(paths.top());

                // for(unsigned int  i = 0; i < neighboors.size(); i++){            
                //      if(paths.top()->getType() != 2 && paths.top() -> getStatus() == false){
                //          std::cout<<"back"; 
                //      }  
                // }
                for(unsigned int  i = 0; i < neighboors.size(); i++){
                    if(paths.top()->getStatus() == true){
                    }else{
                        if(paths.top()->getType() != 2 && paths.top()->getStatus() == false){
                            neighboors[i]->setBack(paths.top());  
                            paths.push(neighboors[i]);
                            paths.top()->setVisited();
                            paths.pop();
                        }
                    }
                }
            //   for(unsigned int  i = 0; i < neighboors.size(); i++){            
            //     neighboors[i]->setBack(paths.top());           
            }

        //   }
       }
   }
}



        //   std::vector<Square*> neighboors = cave->getNeighboor( paths.top());
        //   for(unsigned int  i = 0; i < neighboors.size(); i++){            
        //     neighboors[i]->setBack(paths.top());           
        // }
        //   for(unsigned int  i = 0; i < neighboors.size(); i++){
        //     if(neighboors[i]->getStatus()){
        //     }else{
        //             paths.push(neighboors[i]);
        //         }
        //     }
        //   }
        //   paths.pop();



bool SondaFila::isEmpty(){
    return paths.empty();
}
bool SondaFila::isFinished(){
    // if(cave->allVisite() && found();)
}
