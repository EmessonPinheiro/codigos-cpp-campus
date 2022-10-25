#include<iostream>
#include <string>
#include <Forma.h>
using namespace std;

class Circulo : public Forma
{
private:
    float raio;

public:
//    Forma();
//    ~Forma();

    //MÉTODOS
    void setRaio(float valorRaio){
        raio = valorRaio;
    }

    float getRaio(){
        return raio;
    }

    float calcularArea(){
        float area = (raio*raio)*3.14;
    }

    float calcularPerimetro(){
        float perimetro = raio*3.14*2;
    }

    string print(){
        
    }
    
};