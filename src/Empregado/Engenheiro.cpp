#include "Engenheiro.hpp"


Engenheiro::Engenheiro(std::string nome, double salarioHora, double quotaMensalVendas){
    this->nome = nome;
    this->salarioHora = salarioHora;
    this->quotaMensalVendas = quotaMensalVendas;
}

void Engenheiro::setProjetos(int total){
    this->projetos = total;
}

int Engenheiro::getProjetos(){
    return this->projetos;
}