#ifndef SERIE_H //César Pascual De la Torre A01751521 Karol Alexis A01751711
#define SERIE_H 
#include <string>
#include <vector>
#include "temporada.h"
#include "video.h"

class Serie : public Video{

    private:
    int temp;
    std::vector <Temporada> temporadas;
    
    public:

    Serie(std::string, std::string, std::string, int);
    int getDuracion();
    void setDuracion(int);
    float getCalificacion();
    void setCalificacion(float);
    void agregarTemporada(Temporada);
    void toString();

};


#endif