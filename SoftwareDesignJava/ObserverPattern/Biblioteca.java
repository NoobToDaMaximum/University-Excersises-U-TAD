package ObserverPattern;

public class Biblioteca {
	public void devolverLibro(Libro libro, AlarmaLibro alarma) {
		if(libro.getSahRoto() == false) {
			alarma.setLibro(libro);
		}
	}
}
