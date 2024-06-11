#ifndef MULTI_H //César Pascual De la Torre A01751521 
#define MULTI_H 
#include <string>
#include <vector>

class Multimedia{

    protected:

    std::string id;
    std::string tipo;
    std::string nombre;
    int duracion;
    std::string genero; 
    float calificacion;
    Multimedia(std::string);
    Multimedia(std::string, std::string, int, std::string, float);

    public:
    std::string getTipo();
    std::string getID();
    void setID(std::string);
    std::string getNombre();
    void setNombre(std::string);
    virtual int getDuracion();
    virtual void setDuracion(int);
    std::string getGenero();
    void setGenero(std::string);
    virtual float getCalificacion();
    virtual void setCalificacion(float);
    virtual void toString();

};


#endif