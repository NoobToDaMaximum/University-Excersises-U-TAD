package CasoDeEstudioStatePattern;

public class StateContext {
	private State state;
	
	public StateContext() {
		state = new StateCreada();
	}
	
	void setState(State newState) {
		state = newState;
	}
	
	public void CambioEstado(Libro libro, Cliente cliente) {
		state.cambiarDeEstado(this, libro, cliente);
	}
}
