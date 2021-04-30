package CasoDeEstudioII;

public class RecompensaPegatina extends Recompensa
{
    public RecompensaPegatina(){}

    @Override
    public String getDesc() {
        return ", Pegatina Comportamiento";
    }

    @Override
    public int getNumRecompensa() {
        return 1;
    }
    
    @Override
    public String toString() {
        return getNumRecompensa() + " recompensas. " + getDesc();
    }

    @Override
    public Recompensa getRecompensa() {
        return null;
    }
}
