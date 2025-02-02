#include "Funcionario.hpp"

// Construtor
Funcionario::Funcionario(const std::string nome, const std::string cpf,
    const std::string matricula, const double salario,
    const double cargaHoraria, const double qntHorasMes) : PessoaFisica{nome, cpf} {
        setMatricula(matricula);
        setSalario(salario);
        setCargaHoraria(cargaHoraria);
        setQntHorasMes(qntHorasMes);
}

// Métodos set()
void Funcionario::setMatricula (const std::string matricula) {
    m_matricula = (matricula.empty() ? "Nenhuma" : matricula);
}
void Funcionario::setSalario (const double salario) {
    m_salario = (salario < 0 ? 0.0 : salario);
}
void Funcionario::setCargaHoraria (const double cargaHoraria) {
    m_cargaHoraria = (cargaHoraria < 0 ? 0.0 : cargaHoraria);
}
void Funcionario::setQntHorasMes (const double qntHorasMes) {
    m_qntHorasMes = (qntHorasMes < 0 or qntHorasMes > getCargaHoraria() ? 0.0 : qntHorasMes);
}

// Métodos especiais da classe
void Funcionario::apresentar() const {
    std::cout << "============ FUNCIONÁRIO ===========" << std::endl <<
    "Nome: " << getNome() << std::endl <<
    "Cpf: " << getCpf() << std::endl <<
    "Matrícula: " << getMatricula() << std::endl <<
    "Sálario: " << getSalario() << std::endl <<
    "Carga horária: " << getCargaHoraria() << std::endl <<
    "Horas mensais trabalhadas: " << getQntHorasMes() << std::endl <<
    "Salário bruto total: " << salarioBruto() << std::endl << std::endl;
}
double Funcionario::salarioBruto() const {
    return getSalario() * getQntHorasMes()/getCargaHoraria();
}

// Sobrecarga de "<<" para imprimir dados
std::ostream& operator<<(std::ostream &out, const Funcionario &funcionario) {
    out << "============ FUNCIONÁRIO ===========" << std::endl <<
    "Nome: " << funcionario.getNome() << std::endl <<
    "Cpf: " << funcionario.getCpf() << std::endl <<
    "Matrícula: " << funcionario.getMatricula() << std::endl <<
    "Sálario: " << funcionario.getSalario() << std::endl <<
    "Carga horária: " << funcionario.getCargaHoraria() << std::endl <<
    "Horas mensais trabalhadas: " << funcionario.getQntHorasMes() << std::endl <<
    "Salário bruto total: " << funcionario.salarioBruto() << std::endl << std::endl;
    return out;
}

