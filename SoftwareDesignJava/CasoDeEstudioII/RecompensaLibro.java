package CasoDeEstudioII;

public class RecompensaLibro extends Recompensa
{
    private final Recompensa recompensa;
    private String nombreLibro;

    public RecompensaLibro(Recompensa recompensa){
        this.recompensa = recompensa;
        this.setNombreLibro("");
    }

    public RecompensaLibro(Recompensa recompensa, String nombreLibro){
        this.recompensa = recompensa;
        this.setNombreLibro(nombreLibro);
    }
    
    public String getNombreLibro() {
        return nombreLibro;
    }

    public void setNombreLibro(String nombreLibro) {
        this.nombreLibro = nombreLibro;
    }

    @Override
    public String getDesc() {
        return recompensa.getDesc() + ", Libro Niño de la semana";
    }

    @Override
    public int getNumRecompensa() {
        return recompensa.getNumRecompensa() + 1;
    }

    @Override
    public String toString() {
        return getNumRecompensa() + " recompensas. " + getDesc();
    }

    @Override
    public Recompensa getRecompensa() {
        return recompensa;
    }
}
