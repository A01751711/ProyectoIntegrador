#include "video.h" //César Pascual De la Torre A01751521 Karol Alexis A01751711
#include <iostream>

Video::Video(){}

Video::Video(std::string aid, std::string nom, int du, std::string ge, float cal){
    id = aid;
    nombre = nom;
    duracion = du;
    genero = ge; 
    calificacion = cal;
}


std::string Video::getID(){return id;}

void Video::setID(std::string aidi){id = aidi;}

std::string Video::getNombre(){return nombre;}

void Video::setNombre(std::string n){nombre = n;}

std::string Video::getGenero(){return genero;}

void Video::setGenero(std::string g){genero = g;}

int Video::getDuracion(){return duracion;}

void Video::setDuracion(int d){duracion = d;}

float Video::getCalificacion(){return calificacion;} 

void Video::setCalificacion(float c){calificacion = c;}

void Video::toString(){
    std::cout << "ID: " + id + "Nombre:" + nombre + ". Duración: " + std::to_string(duracion) + " minutos. Género: " + genero +  ". Calificación: " + std::to_string(calificacion) << std::endl;
}

