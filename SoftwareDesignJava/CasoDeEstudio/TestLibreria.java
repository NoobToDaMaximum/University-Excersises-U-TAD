package CasoDeEstudio;

public class TestLibreria {
    public static void main(String[] args)
    {
        Biblioteca biblioteca = new Biblioteca(new AlarmaLibro());
        Observador stock = new DepartamentoStock();
        Observador compras = new DepartamentoCompras();
        Observador administracion = new DepartamentoAdministracion();

        // Se conectan las alarmas.
        biblioteca.getAlarmaLibro().attach(stock);
        biblioteca.getAlarmaLibro().attach(compras);
        biblioteca.getAlarmaLibro().attach(administracion);

        // Se crean 2 libros para probar uno con dañado fasle y otro con true.
        Libro libro1 = new Libro("Buen estado", "Fernando", false);
        Libro libro2 = new Libro("Mal estado", "no Fernando", true);

        biblioteca.devolverLibro(libro1);
        biblioteca.devolverLibro(libro2);
    }
}
