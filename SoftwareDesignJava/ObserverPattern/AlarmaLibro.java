package ObserverPattern;

import java.util.Observable;

public class AlarmaLibro extends Observable{
	
	Libro libro = new Libro();
	
	public AlarmaLibro() {
		super();
	}

	public void setLibro(Libro libro) {
		this.libro = libro;
		setChanged();
		notifyObservers("Titulo: " + libro.getTitulo());
	}
}
