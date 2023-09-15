#include <iostream>

class Terrestre {
public:
    int rodas;

    explicit Terrestre(int quant_rodas) : rodas(quant_rodas) {}

    void caminhar() {
        std::cout << "Caminhando..." << std::endl;
    }

    void parar() {
        std::cout << "Parando de caminhar" << std::endl;
    }
};

class Aquatico {
public:
    int propulsores;

    explicit Aquatico(int quant_propulsores) : propulsores(quant_propulsores) {}

    void nadar() {
        std::cout << "Nadando..." << std::endl;
    }

    void parar() {
        std::cout << "Parando de nadar" << std::endl;
    }
};

class Hibrido : public Terrestre, public Aquatico {
public:
    Hibrido(int q_rodas, int q_propulsores)
            : Terrestre(q_rodas), Aquatico(q_propulsores) {}
};

int main() {
    Hibrido robo_hibrido(4, 6);
    std::cout << "Rodas: " << robo_hibrido.rodas << std::endl;
    std::cout << "Propulsores: " << robo_hibrido.propulsores << std::endl;
    robo_hibrido.Terrestre::parar();
    robo_hibrido.Aquatico::parar();
    return 0;
}

