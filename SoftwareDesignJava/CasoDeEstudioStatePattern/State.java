package CasoDeEstudioStatePattern;

public interface State {
	void cambiarDeEstado(StateContext context, Libro libro, Cliente cliente);
}
