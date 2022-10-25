#include <iostream>
 using namespace std;

 class valor_padrao{

    public:
 //valores padrão
    valor_padrao(int p = -1, float v = -1.0){

        valor = v;
        pecas = p;
    }
 
    float getValor(){
        return valor;
    }
    int getPecas(){
        return pecas;
    }

    private:
      float valor;
      int pecas;
 };

int main(){

}
 
