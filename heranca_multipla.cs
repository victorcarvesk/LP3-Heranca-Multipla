interface ITerrestre
{
    void caminhar();
    void parar();
}

interface IAquatico
{
    void nadar();
    void parar();
}

class Hibrido : ITerrestre, IAquatico
{
    public int rodas;
    public int propulsores;

    public Hibrido(int q_rodas, int q_propulsores) {
        this.rodas = q_rodas;
        this.propulsores = q_propulsores;
    }

    public void caminhar()
    {
        Console.WriteLine("Caminhando...");
    }

    public void nadar()
    {
        Console.WriteLine("Nadando...");
    }

    public void parar()
    {
        Console.WriteLine("Parando");
    }
}

class Program
{
    static void Main(String[] args)
    {
        Hibrido robo_hibrido = new Hibrido(4, 6);
        Console.WriteLine($"Rodas: {robo_hibrido.rodas}");
        Console.WriteLine($"Propulsores: {robo_hibrido.propulsores}");
        robo_hibrido.parar();
    }
}

