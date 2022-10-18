#include <iostream>

using namespace std;

class Carro{

public:
    int velocidade;
    int tipo;
    void inicializar(int tp);
    Carro(int tp);
    void imprimir();
    int getVelMax();
    void setVelMax(int tp);
private:
    int velMax;
    string nome;
    bool ligado;
};


int Carro::getVelMax(){
    return velMax;
}

void Carro::setVelMax(int vm){
    velMax = vm;
}

Carro::Carro(int tp){
    tipo = tp;
    if(tipo == 1){
        nome = "convencivel";
        //this->velMax = 120;
        setVelMax(120);
    }else if(tipo == 2){
        nome = "sedan";
        //this->velMax = 180;
        setVelMax(180);
    }else if(tipo == 3){
        nome = "automatico";
        //this->velMax = 200;
        setVelMax(200);
    }
};

void Carro::imprimir(){
    cout << "Tipo: " << tipo << endl;
    cout << "Velocidade maxima: " << velMax << endl;
    cout << "Velocidade atual: " << velocidade << endl;
    cout << "-------------------------------------" << endl;
}

void Carro::inicializar(int tp){
    if(tp == 1){
        this->velMax = 120;
        //this->tipo = "convencivel";
    }else if(tp == 2){
        this->velMax = 180;
       //this->tipo = "sedan";
    }else if(tp == 3){
        this->velMax = 200;
        //this->tipo = "automatico";
    }
}

int main()
{
    Carro *car1 = new Carro(1);
    Carro *car2 = new Carro(2);
    Carro *car3 = new Carro(3);

    //car->inicializar(1);
  //  car1->imprimir();
  //  car2->imprimir();
  //  car3->imprimir();

    cout << car1->getVelMax();
    cout << car2->getVelMax();
    cout << car3->getVelMax();

    //cout << car->velMax;
    return 0;
}