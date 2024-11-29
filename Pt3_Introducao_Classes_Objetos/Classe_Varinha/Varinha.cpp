#include "Varinha.hpp"

    Varinha::Varinha(string madeira, string nucleo, float comprimento){
        setTipoMadeira(madeira);
        setNucleo(nucleo);
        setComprimento(comprimento);
    }
    
    void Varinha::display() const {
        std::cout << "Tipo de madeira: " << m_tipoMadeira <<
        " | Nucleo: " << m_nucleo <<
        " | Comprimento: " << m_comprimento << std::endl;
    }