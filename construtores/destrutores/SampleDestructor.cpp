#include <iostream>
 using namespace std;

 class valor_padrao{

    public:
 //valores padrão
    valor_padrao(int p = -5, float v = -1.0){

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

    valor_padrao a,b(10,10);

    cout<<a.getPecas()<<endl;
    cout<<a.getValor()<<endl;
    cout<<b.getPecas()<<endl;
    cout<<b.getValor()<<endl;
        return 0;
}
 
    