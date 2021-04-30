package CasoDeEstudioStatePattern;

public class StateCursada implements State{

	@Override
	public void cambiarDeEstado(StateContext context, Libro libro, Cliente cliente) {		
		// TODO Auto-generated method stub
		System.out.println("Cursada la peticion de: " + libro.getNombre());
		
		if(cliente.getOcupacion() == "Docente") {
			System.out.println("Tiene diez dias para hacer la devolicion del libro: " + libro.getNombre());
			context.setState(new StateFinalizada());
		}
		if(cliente.getOcupacion() == "Alumno") {
			System.out.println("Tiene quince dias para hacer la devolicion del libro: " + libro.getNombre());
			context.setState(new StateFinalizada());
		}		
	}

}
