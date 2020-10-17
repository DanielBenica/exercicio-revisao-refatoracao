#include "Empregado.hpp"

class Vendedor: public Empregado{
    public:
        Vendedor(std::string nome, double salarioHora, double quotaMensalVendas);
        double quotaTotalAnual();

        double getQuotaMensalVendas();
        void setQuotaMensalVendas(double newQuota);
        
    private:
        double quotaMensalVendas;
};