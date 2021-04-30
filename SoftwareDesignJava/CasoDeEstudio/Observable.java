package CasoDeEstudio;

public interface Observable {
    public void attach(Observador observador);
    public void detach(Observador observador);
    public void updateAllObservers();
}
