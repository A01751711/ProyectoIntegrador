#ifndef PELI_H //César Pascual De la Torre A01751521 
#define PELI_H 
#include <string>
#include "multimedia.h"

class Pelicula : public Multimedia{

    public:

    Pelicula(std::string, std::string, int, std::string, float);
    void toString();

};


#endif