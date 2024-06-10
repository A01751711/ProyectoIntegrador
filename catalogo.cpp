#include "catalogo.h"
#include <string>
#include <vector>
#include "video.h"

Catalogo::Catalogo(){}

void Catalogo::toString(){
    for(int i = 0; i < catalogo.size(); ++i){
        catalogo[i].toString();
    }
    
}