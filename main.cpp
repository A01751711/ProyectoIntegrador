#include "serie.h" //César Pascual De la Torre A01751521 Karol Alexis Alvarado Davila A01751711
#include "pelicula.h"
#include "catalogo.h"
#include "multimedia.h"
#include "temporada.h"
#include "episodio.h"
#include <vector>
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
// Karol Alexis Alvarado Davila A01751711

void menu(){
    
        cout << endl << endl << "***** MENU PRINCIPAL *****"<< endl;
        cout << "1) Datos"<<endl;
        cout << "2) Mostrar los videos en general con una cierta calificación o género"<<endl;
        cout << "3) Mostrar los episodios de una serie con cierta calificacion"<<endl;
        cout << "4) Mostrar las películas con cierta calificacion"<<endl;
        cout << "5) Calificar un video"<<endl;
        cout << "0) Salir"<<endl;

}
//César Pascual De la Torre A01751521

void caso2(Catalogo* &plat) {
    int caso2 = 0;
    float caso22 = 0;
    std::string caso23;

    cout << endl << endl << "***** Mostrar los videos en general con una cierta calificación o género *****" << endl;
    cout << "1) Por calificación (Se mostrarán los videos con esa calificación exacta)" << endl;
    cout << "2) Por género (Utiliza la primer letra mayúscula y no utilices acentos)" << endl;
    cin >> caso2;

    switch (caso2) {
        case 1:{
            cout << endl << "Ingrese la calificación deseada para mostrar los videos:" << endl;
            cin >> caso22;
            std::vector<Multimedia*> cata = plat->getCatalogo();

            for (Multimedia* &vide : cata) {

                if (vide->getCalificacion() == caso22) {
                    vide->toString(); 
                }
            }
        break;
        }case 2:{
            cout << endl << "Ingrese el genero deseado para mostrar los videos:" << endl;
            cin >> caso23;
            std::vector<Multimedia*> cata = plat->getCatalogo();

            for (Multimedia* &vide : cata) {

                if (vide->getGenero() == caso23) {
                    vide->toString(); 
                }
            }
        break;}
    }
}
// Karol Alexis Alvarado Davila A01751711

void caso3(Catalogo* &plat){
    int caso3 = 0;
    std::string caso31;
    cout << "Ingrese el ID de la serie de la que deseas obtener la calificación" << endl;
    cin >> caso31;
    cout << "Ingrese la calificación deseada para mostrar los episodios" << endl;
    cin >> caso3;
    std::vector<Multimedia*> cata = plat->getCatalogo();

    for (Multimedia* &vide : cata) {
        if(vide->getTipo() == "s"){
            if (vide->getID() == caso31) {
            }
        }
    }
}


void caso4(Catalogo* &plat){
    int caso4 = 0;
    cout << "Ingrese la calificación deseada para mostrar las peliculas" << endl;
    cin >> caso4;
    std::vector<Multimedia*> cata = plat->getCatalogo();

    for (Multimedia* &vide : cata) {
        if(vide->getTipo() == "p"){
            if (vide->getCalificacion() == caso4) {
                vide->toString(); 
            }
        }
    }
}
// Karol Alexis Alvarado Davila A01751711

void caso5(Catalogo* &plat){
    float caso5 = 0;
    std::string caso51;
    cout << "Ingrese el ID de la pelicula del deseas cambiar la calificación" << endl;
    cin >> caso51;
    cout << "Ingrese la calificación deseada para cambiar" << endl;
    cin >> caso5;
    std::vector<Multimedia*> cata = plat->getCatalogo();

    for (Multimedia* &vide : cata) {
        if (vide->getID() == caso51) {
            vide->setCalificacion(caso5);
        }
        
    }

}
//César Pascual De la Torre A01751521

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
    Episodio t122("SM22","Smiling Friends Temporada 2 Episodio 2", 12, "Comedia", 5);
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
    Catalogo* plat = &plataforma;

    while(input != 0){
    
        menu();

        input = seleccionarOpcion();

        switch (input) {
            case 1:
                plataforma.toStringC();
                break;
            case 2:
                caso2(plat);
                break;
            case 3:
                caso3(plat);
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
//Ambos alumnos