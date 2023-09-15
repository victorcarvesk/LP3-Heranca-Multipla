# noinspection PyMethodMayBeStatic
class Terrestre():

    def __init__(self, quant_rodas):
        self.rodas = quant_rodas

    def caminhar(self):
        print("Caminhando...")

    def parar(self):
        print("Parando de caminhar")


class Aquatico():

    def __init__(self, quant_propulsores):
        self.propulsores = quant_propulsores

    def nadar(self):
        print("Nadando...")

    def parar(self):
        print("Parando de nadar")


class Hibrido(Terrestre, Aquatico):

    def __init__(self, q_rodas, q_propulsores):
        Terrestre.__init__(self, q_rodas)
        Aquatico.__init__(self, q_propulsores)

    def migrar(self):
        print("Migrando de ambiente...")

    def parar(self):
        print("Parando de mover")


def main():
    robo_hibrido = Hibrido(4, 6)
    print(f"Rodas: {robo_hibrido.rodas}")
    print(f"Propulsores: {robo_hibrido.propulsores}")
    Terrestre.parar(robo_hibrido)
    Aquatico.parar(robo_hibrido)


if __name__ == '__main__':
    main()
