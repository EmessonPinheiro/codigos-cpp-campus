#include<iostream>>
#include <string>
using namespace std;

class Circulo
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
    
};