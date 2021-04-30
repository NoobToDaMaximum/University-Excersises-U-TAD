package CasoDeEstudioStatePattern;

public class StateRechazada implements State{

	@Override
	public void cambiarDeEstado(StateContext context, Libro libro, Cliente cliente) {
		// TODO Auto-generated method stub
		System.out.println("Su peticion del libro: " + libro.getNombre() + " ha sido rechazada.\n");
	}

}
