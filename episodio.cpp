#include "episodio.h" //Karol Alexis Alvarado Davila A01751711
#include "multimedia.h"
#include <iostream>

Episodio::Episodio(std::string aid, std::string nom, int du, std::string ge, float cal) : Multimedia{"e"} {
    id = aid;
    nombre = nom;
    duracion = du;
    genero = ge; 
    calificacion = cal;
}



void Episodio::toString(){
    std::cout << "ID: " + id + "Nombre: " + nombre + ". Duración: " + std::to_string(duracion) + " minutos. Género: " + genero +  ". Calificación: " + std::to_string(calificacion) << std::endl;
}