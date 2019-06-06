#include "sondapilha.h"



void SondaPilha::step(){
    Square* begin = cave->getBegin();    
    paths.push(begin);
   if(isEmpty()){

   }else{
       if(paths.top()->getType()== 3){
        std::cout<<"fim";
       }else{
          while(!isEmpty()){
                std::vector<Square*> neighboors = cave->getNeighboor(paths.top());
                for(unsigned int  i = 0; i < neighboors.size(); i++){            
                     if(paths.top()->getType()== 0){
                         neighboors[i]->setBack(paths.top());  
                         std::cout<<"back"     ; 
                     }   
                }
                for(unsigned int  i = 0; i < neighboors.size(); i++){
                    if(neighboors[i]->getStatus() != true){
                    }else{
                            paths.push(neighboors[i]);
                    }
                }
            //   for(unsigned int  i = 0; i < neighboors.size(); i++){            
            //     neighboors[i]->setBack(paths.top());           
            // }
            std::cout<<" PILHA:" <<*paths.top();
            paths.pop();
          }
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



bool SondaPilha::isEmpty(){
    return paths.empty();
}
bool isFinished(){
    // if(cave->allVisite() && found();)
}
