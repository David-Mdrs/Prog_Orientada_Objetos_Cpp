#include "Varinha.hpp"

    Varinha::Varinha(const string madeira, const string nucleo, const float comprimento){
        setTipoMadeira(madeira);
        setNucleo(nucleo);
        setComprimento(comprimento);
    }
    
    void Varinha::display() const {
        std::cout << "========= Dados da Varinha =========" <<
        "\nTipo de madeira: " << m_tipoMadeira <<
        "\nNucleo: " << m_nucleo <<
        "\nComprimento: " << m_comprimento << std::endl  << std::endl;
    }