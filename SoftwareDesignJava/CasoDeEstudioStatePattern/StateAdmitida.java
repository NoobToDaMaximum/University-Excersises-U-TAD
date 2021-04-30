package CasoDeEstudioStatePattern;

public class StateAdmitida implements State{

	@Override
	public void cambiarDeEstado(StateContext context, Libro libro, Cliente cliente) {
		// TODO Auto-generated method stub
		System.out.println("Admitida la peticion de: " + libro.getNombre());
		System.out.println("Tiene dos dias para hacer la recogida");
		if(cliente.getDiasRecogida() <= 2) {
			context.setState(new StateCursada());
			
		}
		if(cliente.getDiasRecogida() > 2){
			System.out.println("No ha recogido el Libro");
			context.setState(new StateRechazada());
		}
	}

}
