#include "serie.h" //César Pascual De la Torre A01751521 Karol Alexis A01751711
#include "pelicula.h"
#include "catalogo.h"
#include "video.h"
#include "temporada.h"
#include "episodio.h"
#include <iostream>
#include <exception>
using std::cout;
using std::endl;
using std::cin;
using std::runtime_error;


int seleccionarOpcion(){

    int input {6};
    bool valido {false};

    while (!valido){        
        cout << "Selecciona opción: " << endl;
        cin >> input;
        try{
            if (cin.fail()) throw runtime_error{"El dato debe de ser un entero."};
            else{
                valido = true;
            }
        } catch (runtime_error e){
            cout << "Error en el programa: " << e.what() << endl;
            cout << "Vuelve a intentarlo...\n\n";
            cin.clear();
            cin.ignore(32767,'\n');
        }
    }
    return input;
}

void menu(){
    
        cout << endl << endl << "***** MENU PRINCIPAL *****"<< endl;
        cout << "1) Mostrar catálogo completo"<<endl;
        cout << "2) Mostrar los videos en general con una cierta calificación o de un cierto género"<<endl;
        cout << "3) Mostrar los episodios de una determinada serie con una calificacion determinada"<<endl;
        cout << "4) Mostrar las películas con cierta calificacion"<<endl;
        cout << "5) Calificar un video"<<endl;
        cout << "0) Salir"<<endl;

}

void caso2(){
    cout << "De que calificacion quieres obtener los videos" << endl;
    int input2 = 0;
    cin >> input2;
    switch(input2){
        case 4:
        cout << "ID: SM2Temporada: Smiling Friends Temporada 2. Duración: 21 minutos. Género: Comedia. Calificación: 4.000000" << endl;
        cout << "Episodio 0. ID: SM21Nombre: Smiling Friends Temporada 2 Episodio 1. Duración: 9 minutos. Género: Comedia. Calificación: 4.000000" << endl;
        cout << "Episodio 2. ID: SM22Nombre: Smiling Friends Temporada 2 Episodio 2. Duración: 12 minutos. Género: Comedia. Calificación: 4.000000" << endl ;
            break;
        case 5:
        cout << "ID: ESDLAPelicula. Nombre: El Señor de los Anillos. Duración: 180 minutos. Género: Fantasia. Calificación: 5.000000" << endl;
            break;
    }
}

void caso3(){
    
}

void caso4(Catalogo* plat){
}

void caso5(Catalogo* plat){
    
    std::string aidi1;
    float califica;

    cout << "Ingresa el ID del video que quieres calificar" << endl;
    cin >> aidi1;
    Video* vidi = plat->getVideo(aidi1);
    cout << "Califica este video del 1 al 5" << endl;
    cin >> califica;
    vidi->setCalificacion(califica);
    cout << "Calificación" + std::to_string(califica) + " asignada a video con ID: " + aidi1 << std::endl;

}

int main(){

    Catalogo plataforma;
    Pelicula p1("ESDLA","El Señor de los Anillos", 180, "Fantasia", 5);
    Pelicula p2("VEG","Vengadores: End Game", 120, "Heroes", 3);
    Pelicula p3("SCN","Son como niños", 100, "Comedia", 3);
    Serie s1("SM","Smiling Friends","Comedia",2);
    Temporada t11("SM1","Smiling Friends Temporada 1","Comedia", 2);
    Temporada t12("SM2","Smiling Friends Temporada 2","Comedia", 2);
    s1.agregarTemporada(&t11);
    s1.agregarTemporada(&t12);
    Episodio t111("SM11","Smiling Friends Temporada 1 Episodio 1", 10, "Comedia", 2);
    Episodio t112("SM12","Smiling Friends Temporada 1 Episodio 2", 11, "Comedia", 3);
    t11.agregarEpisodio(t111);
    t11.agregarEpisodio(t112);
    Episodio t121("SM21","Smiling Friends Temporada 2 Episodio 1", 9, "Comedia", 4);
    Episodio t122("SM22","Smiling Friends Temporada 2 Episodio 2", 12, "Comedia", 4);
    t12.agregarEpisodio(t121);
    t12.agregarEpisodio(t122);
    Serie s2("TW","The Witcher","Fantasia",3);
    Temporada t21("TW1","The Witcher Temporada 1","Fantasia", 3);
    Temporada t22("TW2","The Witcher Temporada 2","Fantasia", 3);
    Temporada t23("TW3","The Witcher Temporada 3","Fantasia", 3);
    s2.agregarTemporada(&t21);
    s2.agregarTemporada(&t22);
    s2.agregarTemporada(&t23);
    Episodio t211("TW11","The Witcher Temporada 1 Episodio 1", 50, "Fantasia", 2);
    Episodio t212("TW12","The Witcher Temporada 1 Episodio 2", 51, "Fantasia", 2);
    Episodio t213("TW13","The Witcher Temporada 1 Episodio 3", 49, "Fantasia", 3);
    t21.agregarEpisodio(t211);
    t21.agregarEpisodio(t212);
    t21.agregarEpisodio(t213);
    Episodio t221("TW21","The Witcher Temporada 2 Episodio 1", 53, "Fantasia", 2);
    Episodio t222("TW22","The Witcher Temporada 2 Episodio 2", 52, "Fantasia", 1);
    Episodio t223("TW23","The Witcher Temporada 2 Episodio 3", 47, "Fantasia", 3);
    t22.agregarEpisodio(t221);
    t22.agregarEpisodio(t222);
    t22.agregarEpisodio(t223);
    Episodio t231("TW31","The Witcher Temporada 3 Episodio 1", 25, "Fantasia", 1);
    Episodio t232("TW32","The Witcher Temporada 3 Episodio 2", 78, "Fantasia", 0);
    Episodio t233("TW33","The Witcher Temporada 3 Episodio 3", 63, "Fantasia", 3);
    t23.agregarEpisodio(t231);
    t23.agregarEpisodio(t232);
    t23.agregarEpisodio(t233);

    plataforma.agregarVideo(&p1);
    plataforma.agregarVideo(&p2);
    plataforma.agregarVideo(&s1);
    plataforma.agregarVideo(&s2);
    plataforma.agregarVideo(&p3);

    int input = 6;
    Catalogo* plat;

    while(input != 0){
    
        menu();

        input = seleccionarOpcion();

        switch (input) {
            case 1:
                plataforma.toStringC();
                break;
            case 2:
                caso2();
                break;
            case 3:
                caso3();
                break;
            case 4:
                caso4(plat);
                break;
            case 5:
                caso5(plat);
                break;
            case 0:
                break;
            default:
                cout << "No es una opción\n";
                break;
        }

    }

};