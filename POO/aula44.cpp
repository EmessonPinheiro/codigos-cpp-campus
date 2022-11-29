#include <iostream>


using namespace std;


//A CLASSE VEM ANTES A MAIN
class Aviao{
//AO CRIAR A CLASSE, DIGA O QUE VAI SER PÚBLICO E O QUE VAI SER PRIVADO
public:
    int vel = 0; //AQUI EU JA PODERIA INSTANCIAR UM AVIÃO, CLARO Q N TEM MUITO NELE
    int velMax; //ESTA VARIAVEL VAI SER DECLARADA MAIS TARDE, DEPENDE DO TIPO DE AVIAO
    string tipo; //VAI GUARDAR O TIPO DE AVIAO

//APENAS PROTOTIPEI
    void ini(int tp);//PROTOTIPANDO UM MÉTODO QUE RECEBE UM INTEIRO PARA DIZER O TIPO DE OBJETO


private:


};

//CONSTRUINDO O MÉTODO INI, FORA DA CLASSE
//A ESTRUTURA É: retorno Classe::método(parametros){}
void Aviao ::ini(int tp){//1=JATO, 2=MONOMOTOR, 3 =PLANADOR

    if(tp==1){
        this -> velMax =800;
        this -> tipo = "jato";
    }else if(tp==2){
        this -> velMax = 350;
        this -> tipo = "monomotor";
    }else if(tp==3){
        this -> velMax = 180;
        this -> tipo = "planador";
    }

    }


int main(){

    //É ASSIM QUE SE FAZ A INSTANCIA DE UM OBJETO PELO MÉTODO CONSTRUTOR PADRÃO
    Aviao *av1 = new Aviao(); //TEM QUE DECLARAR O NOME COMO PONTEIRO

    cout << av1 -> vel<<endl; // -> É O MODO COMO ACESSAMOS UM PARÂMETRO PUBLICO

    av1 -> ini(3);//CHAMANDO MÉTODO ini() PERTENCENTE AO OBJETO AV1, DO TIPO Aviao

    cout << av1->velMax;


    return 0;
}