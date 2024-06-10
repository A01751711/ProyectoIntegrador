#include "temporada.h" //César Pascual De la Torre A01751521 Karol Alexis A01751711
#include "episodio.h"
#include "video.h"
#include <vector>
#include <string>
#include <iostream>

Temporada::Temporada(std::string aid, std::string nom,std::string ge,int ep) : Video{} {
    id = aid;
    nombre = nom;
    genero = ge;
    epi = ep;
}

float Temporada::getCalificacion(){
    int cali = 0;
    for(int i = 0; i < episodios.size(); ++i){
        cali = cali + episodios[i].getCalificacion();
    }
    cali = cali/episodios.size();
    return cali;
}

void Temporada::setCalificacion(float c){ calificacion = c;}

int Temporada::getDuracion(){
    float duras = 0;
    for(int i = 0; i < episodios.size(); ++i){
        duras = duras + episodios[i].getDuracion();
    }
    return duras;
}

void Temporada::setDuracion(int d){duracion = d;}

void Temporada::agregarEpisodio(Episodio e){episodios.push_back(e);}

void Temporada::toString(){
    std::cout << "Duración: " + std::to_string(getDuracion()) + " minutos. Género: " + genero +  ". Calificación: " + std::to_string(calificacion) << std::endl;
    for(int i = 0; i < episodios.size(); ++i){
        std::cout << "Episodio " + std::to_string(i) + ". "; 
        episodios[i].toString();
    }
}