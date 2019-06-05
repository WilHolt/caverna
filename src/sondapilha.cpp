#include "sondapilha.h"



void SondaPilha::step(){
    std::stack<Square*> paths;
    Square* begin = cave->getBegin();    
    paths.push(begin);
   while(isEmpty(paths)){
       if(paths.top()->getType()== 3){
        std::cout<<"fim";
       }else{
          std::vector<Square*> neighboors = cave->getNeighboor( paths.top());
          for(unsigned int  i = 0; i < neighboors.size(); i++){            
            neighboors[i]->setBack(paths.top());           
        }
          for(unsigned int  i = 0; i < neighboors.size(); i++){
            if(neighboors[i]->getStatus()){
            }else{
                    paths.push(neighboors[i]);
                }
            }
          }
          paths.pop();
          std::cout<<" PILHA:" <<paths.top();
       }
   }


bool SondaPilha::isEmpty(std::stack<Square*> stack){
    return stack.empty();
}
bool isFinished(){
    // if(cave->allVisite() && found();)
}