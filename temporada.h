#ifndef TEMPO_H //Karol Alexis Alvarado Davila A01751711
#define TEMPO_H 
#include <string>
#include <vector>
#include "episodio.h"
#include "multimedia.h"


class Temporada : public Multimedia{

    private:
    int epi;
    std::vector <Episodio> episodios;
    
    public:

    Temporada(std::string, std::string, std::string,int);
    float getCalificacion();
    void setCalificacion(float);
    int getDuracion();
    void setDuracion(int);
    void agregarEpisodio(Episodio);
    void toString();

};


#endif