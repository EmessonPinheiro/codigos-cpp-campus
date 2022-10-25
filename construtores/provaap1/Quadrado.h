#include<iostream>
#include <string>
#include <Retangulo.h>
using namespace std;

class Quadrado : public Retangulo
{
private:
    /* data */
public:
    float base = 5;
    float altura = 5;
    float calcularArea();
};

int main(){

    return 0;
}