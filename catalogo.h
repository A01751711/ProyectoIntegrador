#ifndef CATALOGO_H //César Pascual De la Torre A01751521 Karol Alexis A01751711
#define CATALOGO_H 
#include <string>
#include <vector>
#include "video.h"


class Catalogo{

    private:

    std::vector <Video*> catalogo;
    
    public:

    Catalogo();
    void agregarVideo(Video*);
    void toStringC();

};


#endif