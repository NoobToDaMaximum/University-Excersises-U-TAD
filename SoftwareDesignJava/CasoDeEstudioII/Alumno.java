package CasoDeEstudioII;

public class Alumno
{
    private String nombre;
    private Recompensa recompensa;

    public Alumno(String nombre){
        this.nombre = nombre;
        recompensa = new RecompensaPegatina();
    }

    public Recompensa getRecompensa(){
        return this.recompensa;
    }

    public void setRecompensa(Recompensa recompensa){
        this.recompensa = recompensa;
    }

    public int getNumRecompensa() {
        return recompensa.getNumRecompensa();
    }

    public void nuevoDia(){
        this.recompensa = new RecompensaPegatina();
    }

    public void nombreLibro(){
        Recompensa recompensaAux = this.getRecompensa();
        while (!(recompensaAux instanceof RecompensaPegatina)) {
            if(recompensaAux instanceof RecompensaLibro){
                System.out.println(((RecompensaLibro) recompensaAux).getNombreLibro());
                return;
            }
            recompensaAux = recompensaAux.getRecompensa();
        }
        System.out.println("El alumno no tiene ningun libro.");
    }

    @Override
    public String toString() {
        return getNumRecompensa() + " recompensas. " + nombre + " de la clase A" + recompensa.getDesc();
    }
}