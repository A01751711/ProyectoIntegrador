#include "pelicula.h" //César Pascual De la Torre A01751521 Karol Alexis A01751711
#include "video.h"
#include <string>
#include <iostream>

Pelicula::Pelicula(std::string aid, std::string nom, int du, std::string ge, float cal): Video{} {
    id = aid;
    nombre = nom;
    duracion = du;
    genero = ge; 
    calificacion = cal;
}


void Pelicula::toString(){
    std::cout << std::endl << std::endl <<"ID: " + id + "Pelicula. Nombre: " + nombre + ". Duración: " + std::to_string(duracion) + " minutos. Género: " + genero +  ". Calificación: " + std::to_string(calificacion) << std::endl;
}