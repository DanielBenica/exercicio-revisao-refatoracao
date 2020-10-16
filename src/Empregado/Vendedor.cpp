#include "Vendedor.hpp"


Vendedor::Vendedor(std::string nome, double salarioHora, double quotaMensalVendas){

	this->nome = nome;
	this->salarioHora = salarioHora;
	this->quotaMensalVendas = quotaMensalVendas;

	}


double Vendedor::quotaTotalAnual(){
	
	return this->quotaMensalVendas*12;
}
