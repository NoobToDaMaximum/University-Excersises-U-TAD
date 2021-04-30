package CasoDeEstudio;

public class Biblioteca
{
    private AlarmaLibro alarmaLibro = new AlarmaLibro();

    public Biblioteca (){}

    public Biblioteca (AlarmaLibro alarmaLibro)
    {
        this.setAlarmaLibro(alarmaLibro);
    }

    public AlarmaLibro getAlarmaLibro() {
        return alarmaLibro;
    }

    public void setAlarmaLibro(AlarmaLibro alarmaLibro) {
        this.alarmaLibro = alarmaLibro;
    }

    public void devolverLibro(Libro libro)
    {
        if (libro.getDanado())
        {
            alarmaLibro.setLibro(libro);
        }
    }
}
