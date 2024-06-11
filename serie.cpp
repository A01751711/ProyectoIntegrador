#include "serie.h" //Karol Alexis Alvarado Davila A01751711
#include "multimedia.h"
#include "temporada.h"
#include <vector>
#include <string>
#include <iostream>

Serie::Serie(std::string aid, std::string nom, std::string ge, int te) : Multimedia{"s"} {
    id = aid;
    nombre = nom;
    genero = ge;
    temp = te;
}

std::vector <Temporada*> Serie::getVector(){return temporadas;}

int Serie::getDuracion(){
    int duras = 0;
    for(int i = 0; i < temporadas.size(); ++i){
        duras = duras + temporadas[i]->getDuracion();
    }
    return duras;
}

void Serie::setDuracion(int d){duracion = d;}

float Serie::getCalificacion(){
    float cali = 0;
    for(int i = 0; i < temporadas.size(); ++i){
        cali = cali + temporadas[i]->getCalificacion();
    }
    cali = cali/temporadas.size();
    return cali;
}

void Serie::setCalificacion(float c){calificacion = c;}

void Serie::agregarTemporada(Temporada* t){temporadas.push_back(t);}

void Serie::toString(){
    std::cout << std::endl << std::endl <<"ID: " + id + ". Serie. Nombre: " + nombre + ". Duración: " + std::to_string(getDuracion()) + " minutos. Género: " + genero +  ". Calificación: " + std::to_string(getCalificacion()) << std::endl;
    for (Temporada* video : temporadas) {
        video->toString();
    }

}