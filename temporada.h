#ifndef TEMPO_H //César Pascual De la Torre A01751521 Karol Alexis A01751711
#define TEMPO_H 
#include <string>
#include <vector>
#include "episodio.h"
#include "video.h"


class Temporada : public Video{

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