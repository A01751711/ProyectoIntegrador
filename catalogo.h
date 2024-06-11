#ifndef CATALOGO_H //César Pascual De la Torre A01751521 
#define CATALOGO_H 
#include <string>
#include <vector>
#include "multimedia.h"


class Catalogo{

    private:

    std::vector <Multimedia*> catalogo;
    
    public:

    Catalogo();
    std::vector <Multimedia*> getCatalogo();
    Multimedia* getVideo(std::string ind);
    void agregarVideo(Multimedia*);
    void toStringC();

};


#endif