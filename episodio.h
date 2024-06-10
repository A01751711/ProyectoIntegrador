#ifndef EPISODIO_H //César Pascual De la Torre A01751521 Karol Alexis A01751711
#define EPISODIO_H 
#include <string>
#include "video.h"

class Episodio : public Video{

    
    public:

    Episodio(std::string, std::string, int, std::string, float);
    void toString() ;

};


#endif