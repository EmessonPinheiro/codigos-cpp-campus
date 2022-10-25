#include <iostream>

using namespace std;

class GradeBook{

    public:

    //o construtor inicializa courseName com a string fornecida como argumento
        GradeBook(string name)//inicio do construtor
        {
            setCourseName(name); //chame a função set para inicializar courseName
        }//fim do construtor GradeBook

        void setCourseName(string name)
        {
            courseName = name;
        }

        string getCourseName()
        {
            return courseName;
        }

        void displayMessage()
        {
            cout<<"wellcome to the gradebook!\n"<<getCourseName()<<"!"<<endl;

        }

        private:
            string courseName;
};

int main(){
    void displayMessage();
    cout<<"ta mostrando na tela"<<endl;
}