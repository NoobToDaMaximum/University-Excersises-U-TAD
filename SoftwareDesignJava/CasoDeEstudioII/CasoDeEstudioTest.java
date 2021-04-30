package CasoDeEstudioII;

public class CasoDeEstudioTest {
  // Todos los alumnos tienen una recompensa pegatina en su contructor
  public static void main(String[] args) {
		// Prueba alumno sin recompensas.
		Alumno alumno = new Alumno("Fernando");
		System.out.println(alumno.toString() + ".");

    // Prueba nombre del libro para alumno sin libro.
    alumno.nombreLibro();

    // Prueba alumno con Recompensas
    Alumno alumnoII = new Alumno("Jorge");
    alumnoII.setRecompensa(new RecompensaCertificado(alumnoII.getRecompensa()));
    alumnoII.setRecompensa(new RecompensaLibro(alumnoII.getRecompensa(), "Caperucita Roja"));
    System.out.println(alumnoII.toString() + ".");

    // Prueba borrado de Recompensas
    alumnoII.nuevoDia();
    System.out.println(alumnoII.toString() + ".");

    // Prueba nombre del libro para alumno sin libro.
    alumnoII.nombreLibro();
	}
}
