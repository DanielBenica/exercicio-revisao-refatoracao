#include <iostream>
#include <string> 
#include "Empregado.hpp"


class Engenheiro: public Empregado {

    public:
        Engenheiro(std::string nome, double salarioHora, int projetos);
        void setProjetos(int total);
        int getProjetos();


    private:
        int projetos;    
};
