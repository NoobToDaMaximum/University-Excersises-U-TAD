package CasoDeEstudio;

public class NotificacionPorPush {
    public void update (Observador observador, AlarmaLibro alarmaLibro, Libro libro){
        String mensage = libro.getTitulo() + ", autor: " + libro.getAutor();
        observador.update(alarmaLibro, mensage);
    }
}
