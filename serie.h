#ifndef SERIE_H //Karol Alexis Alvarado Davila A01751711
#define SERIE_H 
#include <string>
#include <vector>
#include "temporada.h"
#include "multimedia.h"

class Serie : public Multimedia{

    private:
    int temp;
    std::vector <Temporada*> temporadas;
    
    public:

    Serie(std::string, std::string, std::string, int);
    std::vector <Temporada*> getVector();
    int getDuracion();
    void setDuracion(int);
    float getCalificacion();
    void setCalificacion(float);
    void agregarTemporada(Temporada*);
    void toString();

};


#endif