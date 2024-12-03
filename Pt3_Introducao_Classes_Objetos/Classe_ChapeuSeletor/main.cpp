#include <iostream>
#include "ChapeuSeletor.hpp"

int main() {
    ChapeuSeletor chapeu{};
    chapeu.recepcionar();
    std::cout << chapeu.sortearCasa();

    return 0;
}