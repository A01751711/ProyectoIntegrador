#include "temporada.h" //Karol Alexis Alvarado Davila A01751711
#include "episodio.h"
#include "multimedia.h"
#include <vector>
#include <string>
#include <iostream>

Temporada::Temporada(std::string aid, std::string nom,std::string ge,int ep) : Multimedia{"t"} {
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
    std::cout << "ID: " + id + "Temporada: " + nombre + ". Duración: " + std::to_string(getDuracion()) + " minutos. Género: " + genero +  ". Calificación: " + std::to_string(getCalificacion()) << std::endl;
    for(int i = 0; i < episodios.size(); ++i){
        std::cout << "Episodio " + std::to_string(i+1) + ". "; 
        episodios[i].toString();
    }
}