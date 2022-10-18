#include <iostream>

//1- Classe Usuario

//public: void imprimir(tipo inteiro) e depois pelo Construtor
//imprimir todos os tipos abaixo

//privado: tipo string
//-nome
//-modalidade(1-aluno, 2-professor, 3-tecnico)
//-ocupacao
//-email
//privado: tipo inteiro
//-idade
//privado: tipo char
//-sexo

//2 - Construtor

//3 - gets e sets (encapsulamento para permitir o acesso aos métodos e variaveis privadas)

using namespace std;

//1 - Classe Carro
class Carro{
public:
    Carro(int tp, int velocidade);

    string getNome();
    void setNome(string n);

    int getVelocidade();
    void setVelocidade(int vm);

    string getCor();
    void setCor(string c);

    int getTipo();
    void setTipo(int vm);


private:
    //int velocidade = 0;
    string nome;
    string cor;
    int tipo; // 1-sedan 2-convencivel 3-4x4
    int velocidade;
};

//2 - Construtor
Carro::Carro(int tp, int velocidade){
    tipo=tp;
    if(tipo == 1){
        this->velocidade = velocidade;
        cout << "Tipo: " << "sedan" << endl;
        cout << "Velocidade: " << velocidade << endl;
    }else if(tipo == 2){
        this->velocidade = velocidade;
        cout << "Tipo: " << "convencivel" << endl;
        cout << "Velocidade: " << velocidade << endl;
    }else if(tipo == 3){
        this->velocidade = velocidade;
        cout << "Tipo: " << "4x4" << endl;
        cout << "Velocidade: " << velocidade << endl;
    }
    cout << "---------------------------" << endl;
}

//3 - gets e sets (encapsulamento para permitir o acesso aos métodos e variaveis privadas)

string Carro::getNome(){
    return nome;
}
void Carro::setNome(string n){
    nome = n;
}

int Carro::getVelocidade(){
    return velocidade;
}

void Carro::setVelocidade(int vm){
    velocidade = vm;
}

int main()
{
    //Criar objeto para testar o construtor
    Carro *car1 = new Carro(1, 120);//instanciar ou iniciliar um objeto
    Carro *car2 = new Carro(2, 180);//instanciar ou iniciliar um objeto
    Carro *car3 = new Carro(3, 160);//instanciar ou iniciliar um objeto

    //car1->velocidade = 300;

    car1->setVelocidade(300);

    cout << "Velocidade: " << car1->getVelocidade() << endl;

    return 0;
}