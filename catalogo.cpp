#include "catalogo.h"
#include <iostream>
#include <string>
#include <vector>
#include "video.h"

Catalogo::Catalogo(){}

void Catalogo::agregarVideo(Video* v){catalogo.push_back(v);}

void Catalogo::toStringC(){
    for (Video* video : catalogo) {
        video->toString();
    }
}