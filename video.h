#ifndef VIDEO_H //César Pascual De la Torre A01751521 Karol Alexis A01751711
#define VIDEO_H 
#include <string>

class Video{

    protected:

    std::string id;
    std::string nombre;
    int duracion;
    std::string genero; 
    float calificacion;
    Video();
    Video(std::string, std::string, int, std::string, float);

    public:
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