package CasoDeEstudio;

import java.util.*;

public class AlarmaLibro implements Observable
{
    private List<Observador> observadores = new ArrayList<Observador>();
    private Libro libro;
    private NotificacionPorPush notificacion = new NotificacionPorPush();

    public AlarmaLibro(){
        super();
    }
    
    public Libro getLibro() {
        return libro;
    }
    
    public void setLibro(Libro libro) {
        this.libro = libro;
        updateAllObservers();
    }
    
    @Override
    public void attach(Observador observador) {
        this.observadores.add(observador);
    }

    @Override
    public void detach(Observador observador) {
        this.observadores.remove(observador);
    }

    @Override
    public void updateAllObservers() {
        for (int i = 0; i < observadores.size(); i++) {
            this.notificacion.update(observadores.get(i), this, libro);
        }
    }
    
}
