#include "Engenheiro.hpp"


Engenheiro::Engenheiro(std::string nome, double salarioHora, int projetos){
    this->setNome(nome);
    this->setSalarioHora(salarioHora);
    this->setProjetos(projetos);
}

void Engenheiro::setProjetos(int total){
    this->projetos = total;
}

int Engenheiro::getProjetos(){
    return this->projetos;
}