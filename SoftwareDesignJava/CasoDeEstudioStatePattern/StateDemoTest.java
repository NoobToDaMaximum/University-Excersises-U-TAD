package CasoDeEstudioStatePattern;

public class StateDemoTest {
	public static void main(String[] args) {
		StateContext context1 = new StateContext();
		StateContext context2 = new StateContext();
		StateContext context3 = new StateContext();
		
		Libro elNombreDeLaRosa = new Libro();
		elNombreDeLaRosa.setNombre("El nombre de la rosa");
		elNombreDeLaRosa.setEstado("Mal");
		
		Libro it = new Libro();
		it.setNombre("IT");
		it.setEstado("Bien");
		
		Cliente profe = new Cliente();
		profe.setName("Fernando");
		profe.setCuenta(false);
		profe.setDiasRecogida(2);
		profe.setOcupacion("Docente");
		
		Cliente alumno = new Cliente();
		alumno.setName("Eduardo");
		alumno.setCuenta(true);
		alumno.setDiasRecogida(1);
		alumno.setOcupacion("Alumno");
		
		Cliente profe2 = new Cliente();
		profe2.setName("Fernando");
		profe2.setCuenta(true);
		profe2.setDiasRecogida(5);
		profe2.setOcupacion("Docente");
		
		context1.CambioEstado(elNombreDeLaRosa, profe);
		context1.CambioEstado(elNombreDeLaRosa, profe);

		
		context2.CambioEstado(it, alumno);
		context2.CambioEstado(it, alumno);
		context2.CambioEstado(it, alumno);
		context2.CambioEstado(it, alumno);
		
		context3.CambioEstado(elNombreDeLaRosa, profe2);
		context3.CambioEstado(elNombreDeLaRosa, profe2);
		context3.CambioEstado(elNombreDeLaRosa, profe2);
		
	}
}
