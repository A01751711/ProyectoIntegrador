#include "episodio.h" //César Pascual De la Torre A01751521 Karol Alexis A01751711
#include "video.h"
#include <iostream>

Episodio::Episodio(std::string aid, std::string nom, int du, std::string ge, float cal) : Video{} {
    id = aid;
    nombre = nom;
    duracion = du;
    genero = ge; 
    calificacion = cal;
}



void Episodio::toString(){
    std::cout << "ID: " + id + "Nombre: " + nombre + ". Duración: " + std::to_string(duracion) + " minutos. Género: " + genero +  ". Calificación: " + std::to_string(calificacion) << std::endl;
}