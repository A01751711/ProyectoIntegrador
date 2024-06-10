#ifndef PELI_H //César Pascual De la Torre A01751521 Karol Alexis A01751711
#define PELI_H 
#include <string>
#include "video.h"

class Pelicula : public Video{

    public:

    Pelicula(std::string, std::string, int, std::string, float);
    void toString();

};


#endif