package CasoDeEstudioStatePattern;

public class StateCreada implements State{

	@Override
	public void cambiarDeEstado(StateContext context,Libro libro, Cliente cliente) {
		System.out.println("Creada peticion para: " + libro.getNombre());
		// TODO Auto-generated method stub
		if(cliente.getCuenta() == true) {
			context.setState(new StateAdmitida());
		}if(cliente.getCuenta() == false){
			System.out.println("No tiene una cuenta activada.");
			context.setState(new StateRechazada());
		}
		
	}

}