#ifndef EPISODIO_H //Karol Alexis Alvarado Davila A01751711
#define EPISODIO_H 
#include <string>
#include "multimedia.h"

class Episodio : public Multimedia{

    
    public:

    Episodio(std::string, std::string, int, std::string, float);
    void toString();

};


#endif