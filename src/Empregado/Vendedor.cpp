#include "Vendedor.hpp"


Vendedor::Vendedor(std::string nome, double salarioHora, double quotaMensalVendas){

	this->setNome(nome);
	this->setSalarioHora(salarioHora);
	this->setQuotaMensalVendas(quotaMensalVendas);

}


double Vendedor::getQuotaMensalVendas(){
	return this->quotaMensalVendas;
}

void Vendedor::setQuotaMensalVendas(double newQuota){
	this->quotaMensalVendas= newQuota;
}

double Vendedor::quotaTotalAnual(){
	
	return (this->getQuotaMensalVendas())*12;
}
