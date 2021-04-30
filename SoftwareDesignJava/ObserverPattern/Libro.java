package ObserverPattern;

public class Libro {
	private String titulo;
	private Boolean sahRoto;
	
	public String getTitulo() {
		return titulo;
	}
	public void setTitulo(String titulo) {
		this.titulo = titulo;
	}
	public Boolean getSahRoto() {
		return sahRoto;
	}
	public void setSahRoto(Boolean sahRoto) {
		this.sahRoto = sahRoto;
	}
	
	public Libro() {
		titulo = null;
		sahRoto = null;
	}
	
	public Libro(String titulo, Boolean sahRoto) {
		this.titulo = titulo;
		this.sahRoto = sahRoto;
	}
}
