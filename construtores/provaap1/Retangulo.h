#include <iostream>
#include <string>
#include <Forma.h>

using namespace std;

class Retangulo : public Forma
{
private:
    float base;
    float altura;
public:
//    Forma();
//    ~Forma();

    //MÉTODOS
    void setBase(float valorbase){
        base = valorbase;
    }

    float getBase(){
        return base;
    }

    void setAltura(float valorAltura){
        altura = valorAltura;
    }

    float getAltura(){
        return altura;
    }
    
    float calcularArea(float essaBase, float essaAltura){
            essaBase = getBase();
            essaAltura = getAltura();

            float Area = essaBase*essaAltura;
            return Area;
    }


    float calcularPerimetro(){
        float Perimetro = (getBase()*2) + (getAltura()*2);
    }

    string print(){

    }

    string print(){

    }
};