package CasoDeEstudioStatePattern;

public class StateFinalizada implements State{

	@Override
	public void cambiarDeEstado(StateContext context, Libro libro, Cliente cliente) {
		// TODO Auto-generated method stub
		System.out.println("Finalizada");
		System.out.println("Libro devuelto: " + libro.getNombre());
		System.out.println("Estado: " + libro.getEstado() + "\n");
	}

}
