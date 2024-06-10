#include "catalogo.h"
#include <iostream>
#include <string>
#include <vector>
#include "video.h"

Catalogo::Catalogo(){}

void Catalogo::agregarVideo(Video* v){catalogo.push_back(v);}

std::vector <Video*> Catalogo::getCatalogo(){return catalogo;}

Video* Catalogo::getVideo(std::string ind){
    for(Video* vid : catalogo){
        if(vid->getID() == ind){
            return vid;
        }
    }
}

void Catalogo::toStringC(){
    for (Video* video : catalogo) {
        video->toString();
    }
}