#include "multimedia.h" //César Pascual De la Torre A01751521 
#include <iostream>

Multimedia::Multimedia(std::string t){tipo = t;}

Multimedia::Multimedia(std::string aid, std::string nom, int du, std::string ge, float cal){
    id = aid;
    nombre = nom;
    duracion = du;
    genero = ge; 
    calificacion = cal;
}

std::string Multimedia::getTipo(){return tipo;}

std::string Multimedia::getID(){return id;}

void Multimedia::setID(std::string aidi){id = aidi;}

std::string Multimedia::getNombre(){return nombre;}

void Multimedia::setNombre(std::string n){nombre = n;}

std::string Multimedia::getGenero(){return genero;}

void Multimedia::setGenero(std::string g){genero = g;}

int Multimedia::getDuracion(){return duracion;}

void Multimedia::setDuracion(int d){duracion = d;}

float Multimedia::getCalificacion(){return calificacion;} 

void Multimedia::setCalificacion(float c){calificacion = c;}

void Multimedia::toString(){
    std::cout << "ID: " + id + ". Nombre:" + nombre + ". Duración: " + std::to_string(duracion) + " minutos. Género: " + genero +  ". Calificación: " + std::to_string(calificacion) << std::endl;
}

