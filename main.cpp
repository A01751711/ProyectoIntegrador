#include "serie.h" //César Pascual De la Torre A01751521 Karol Alexis A01751711
#include "pelicula.h"
#include "catalogo.h"
#include "video.h"
#include "temporada.h"
#include "episodio.h"
#include <iostream>




int main(){

    Catalogo plataforma;
    Pelicula p1("ESDLA","El Señor de los Anillos", 180, "Fantasia", 10);
    Pelicula p2("VEG","Vengadores: End Game", 120, "Heroes", 8);
    Pelicula p3("SCN","Son como niños", 100, "Comedia", 8);
    Serie s1("SM","Smiling Friends","Comedia",2);
    Temporada t11("SM1","Smiling Friends Temporada 1","Comedia", 2);
    Temporada t12("SM2","Smiling Friends Temporada 2","Comedia", 2);
    s1.agregarTemporada(t11);
    s1.agregarTemporada(t12);
    Episodio t111("SM11","Smiling Friends Temporada 1 Episodio 1", 10, "Comedia", 10);
    Episodio t112("SM12","Smiling Friends Temporada 1 Episodio 2", 11, "Comedia", 9);
    t11.agregarEpisodio(t111);
    t11.agregarEpisodio(t112);
    Episodio t121("SM21","Smiling Friends Temporada 2 Episodio 1", 9, "Comedia", 7);
    Episodio t122("SM22","Smiling Friends Temporada 2 Episodio 2", 12, "Comedia", 5);
    t12.agregarEpisodio(t121);
    t12.agregarEpisodio(t122);
    Serie s2("TW","The Witcher","Fantasia",3);
    Temporada t21("TW1","The Witcher Temporada 1","Fantasia", 3);
    Temporada t22("TW2","The Witcher Temporada 2","Fantasia", 3);
    Temporada t23("TW3","The Witcher Temporada 3","Fantasia", 3);
    s2.agregarTemporada(t21);
    s2.agregarTemporada(t22);
    s2.agregarTemporada(t23);
    Episodio t211("TW11","The Witcher Temporada 1 Episodio 1", 50, "Fantasia", 1);
    Episodio t212("TW12","The Witcher Temporada 1 Episodio 2", 51, "Fantasia", 5);
    Episodio t213("TW13","The Witcher Temporada 1 Episodio 3", 49, "Fantasia", 2);
    t21.agregarEpisodio(t211);
    t21.agregarEpisodio(t212);
    t21.agregarEpisodio(t213);
    Episodio t221("TW21","The Witcher Temporada 2 Episodio 1", 53, "Fantasia", 2);
    Episodio t222("TW22","The Witcher Temporada 2 Episodio 2", 52, "Fantasia", 8);
    Episodio t223("TW23","The Witcher Temporada 2 Episodio 3", 47, "Fantasia", 7);
    t22.agregarEpisodio(t221);
    t22.agregarEpisodio(t222);
    t22.agregarEpisodio(t223);
    Episodio t231("TW31","The Witcher Temporada 3 Episodio 1", 25, "Fantasia", 10);
    Episodio t232("TW32","The Witcher Temporada 3 Episodio 2", 78, "Fantasia", 10);
    Episodio t233("TW33","The Witcher Temporada 3 Episodio 3", 63, "Fantasia", 5);
    t23.agregarEpisodio(t231);
    t23.agregarEpisodio(t232);
    t23.agregarEpisodio(t233);

};