package CasoDeEstudioStatePattern;

public class Libro {
	private String nombre;
	private String estado;
	
	public Libro () {
		
	}
	
	public Libro(String nombre, String estado) {
		this.setEstado(estado);
		this.setNombre(nombre);
	}

	public String getNombre() {
		return nombre;
	}

	public void setNombre(String nombre) {
		this.nombre = nombre;
	}

	public String getEstado() {
		return estado;
	}

	public void setEstado(String estado) {
		this.estado = estado;
	}
	
}
