#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {
	
  public:
 
    double pagamentoMes(double horasTrabalhadas);

    double getSalarioHora();
    void setSalarioHora(double newSalario);
    
    
    std::string getNome();
    void setNome(std::string newString);
    


  private:

    double salarioHora;  
    std::string nome;
};

#endif