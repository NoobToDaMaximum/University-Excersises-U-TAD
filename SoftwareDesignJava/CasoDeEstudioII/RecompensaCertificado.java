package CasoDeEstudioII;

public class RecompensaCertificado extends Recompensa
{
    private final Recompensa recompensa;

    public RecompensaCertificado(Recompensa recompensa){
        this.recompensa = recompensa;
    }

    @Override
    public String getDesc() {
        return recompensa.getDesc() + ", Certificado baño";
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
