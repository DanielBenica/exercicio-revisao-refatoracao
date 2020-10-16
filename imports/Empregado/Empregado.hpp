#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {
	
  public:
 
    double pagamentoMes(double horasTrabalhadas);
    double getSalarioHora();
    double getQuotaMensalVendas();
    std::string getNome();


  protected:

    double salarioHora;  
    double quotaMensalVendas;  
    std::string nome;

#endif