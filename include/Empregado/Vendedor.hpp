#include "Empregado.hpp"

class Vendedor: public Empregado{
    public:
        Vendedor(std::string nome, double salarioHora, double quotaMensalVendas);
        double quotaTotalAnual();

};