package CasoDeEstudio;

public class DepartamentoAdministracion implements Observador
{
    @Override
    public void update(Observable observable, String mensage)
    {
        System.out.println("Administracion: se ha devuelto el libro " + mensage + " en mal estado.");
    }
}