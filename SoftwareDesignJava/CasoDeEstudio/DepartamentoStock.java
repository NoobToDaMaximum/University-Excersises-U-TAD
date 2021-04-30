package CasoDeEstudio;

public class DepartamentoStock implements Observador
{
    @Override
    public void update(Observable observable, String mensage)
    {
        System.out.println("Stock: se ha devuelto el libro " + mensage + " en mal estado.");
    }
}
