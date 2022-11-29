#include <iostream>

using namespace std;


//A CLASSE VEM ANTES A MAIN
class Aviao{
//AO CRIAR A CLASSE, DIGA O QUE VAI SER PÚBLICO E O QUE VAI SER PRIVADO
public:
    int vel = 0; //AQUI EU JA PODERIA INSTANCIAR UM AVIÃO, CLARO Q N TEM MUITO NELE


private:


};

int main(){

    //É ASSIM QUE SE FAZ A INSTANCIA DE UM OBJETO PELO MÉTODO CONSTRUTOR PADRÃO
    Aviao *av1 = new Aviao(); //TEM QUE DECLARAR O NOME COMO PONTEIRO

    cout << av1 -> vel<<endl; // -> É O MODO COMO ACESSAMOS UM PARÂMETRO PUBLICO


    return 0;
}