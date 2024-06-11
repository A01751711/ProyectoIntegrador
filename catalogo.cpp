#include "catalogo.h" // César Pascual De la Torre A01751521
#include <iostream>
#include <string>
#include <vector>
#include "multimedia.h"

Catalogo::Catalogo(){}

void Catalogo::agregarVideo(Multimedia* v){catalogo.push_back(v);}

std::vector <Multimedia*> Catalogo::getCatalogo(){return catalogo;}

Multimedia* Catalogo::getVideo(std::string ind){
    for(Multimedia* vid : catalogo){
        if(vid->getID() == ind){
            return vid;
        }
    }
}

void Catalogo::toStringC(){
    for (Multimedia* video : catalogo) {
        video->toString();
    }
}