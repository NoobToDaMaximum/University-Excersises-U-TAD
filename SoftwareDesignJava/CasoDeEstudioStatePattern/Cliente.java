package CasoDeEstudioStatePattern;

public class Cliente {
	private String name;
	private String ocupacion;
	private int diasRecogida;
	private Boolean cuenta;
	
	public Cliente (String name, String ocupacion, int diasRecogida, Boolean cuenta) {
		this.name = name;
		this.ocupacion = ocupacion;
		this.diasRecogida = diasRecogida;
		this.cuenta = cuenta;
	}
	
	public Cliente() {
		
	}

	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public String getOcupacion() {
		return ocupacion;
	}

	public void setOcupacion(String ocupacion) {
		this.ocupacion = ocupacion;
	}

	public int getDiasRecogida() {
		return diasRecogida;
	}

	public void setDiasRecogida(int diasDevolucion) {
		this.diasRecogida = diasDevolucion;
	}

	public Boolean getCuenta() {
		return cuenta;
	}

	public void setCuenta(Boolean cuenta) {
		this.cuenta = cuenta;
	}
	
}
