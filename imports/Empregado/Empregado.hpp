#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {
	
  public:
 
    double pagamentoMes(double horasTrabalhadas);

    double getSalarioHora();
    void setSalarioHora(double newSalario);
    
    double getQuotaMensalVendas();
    void setQuotaMensalVendas(double newQuota);
    
    std::string getNome();
    void setNome(std::string newString);
    


  protected:

    double salarioHora;  
    double quotaMensalVendas;  
    std::string nome;
};

#endif