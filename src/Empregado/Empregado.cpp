#include "Empregado.hpp"


double Empregado::getSalarioHora(){
    return this->salarioHora;
}

void Empregado::setNome(std::string newName){
    this->nome = newName;
}

void Empregado::setSalarioHora(double newSalario){
    this->salarioHora = newSalario;
}


std::string Empregado::getNome(){
    return this->nome;
} 


double Empregado::pagamentoMes(double horasTrabalhadas){


     double t = horasTrabalhadas;
	  
	  //Cálculo de hora extra (+50% se horasTrabalhadas > 8)

      if (horasTrabalhadas > 8) {
        double x = horasTrabalhadas - 8;
        t += x / 2;
      }
	  return t * salarioHora;
    }


