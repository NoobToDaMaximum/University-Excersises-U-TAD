package CasoDeEstudio;

public class DepartamentoCompras implements Observador
{
    @Override
    public void update(Observable observable, String mensage)
    {
        System.out.println("Compras: se ha devuelto el libro " + mensage + " en mal estado.");
    }
}
