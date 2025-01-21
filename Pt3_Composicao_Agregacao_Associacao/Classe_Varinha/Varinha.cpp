#include "Varinha.hpp"

    Varinha::Varinha(const string madeira, const string nucleo, const float comprimento){
        setTipoMadeira(madeira);
        setNucleo(nucleo);
        setComprimento(comprimento);
    }
    
    void Varinha::display() const {
        std::cout << "Tipo de madeira: " << m_tipoMadeira <<
        " | Nucleo: " << m_nucleo <<
        " | Comprimento: " << m_comprimento << std::endl;
    }