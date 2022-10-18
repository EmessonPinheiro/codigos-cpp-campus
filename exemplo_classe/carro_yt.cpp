#include <iostream>

class Carro{
    public:
    int velMax;
    int potencia;
    const char* nome;
    
    Carro(){
        cout<<"carro criado"<<endl;
    }
};

using namespace std;

int main(){

    Carro *c1 = new Carro();

    cout<<"ooooooo\n"<<endl;
    return 0;
};