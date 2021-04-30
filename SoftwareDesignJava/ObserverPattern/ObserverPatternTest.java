package ObserverPattern;

public class ObserverPatternTest {
	public static void main(String[] argc) {
		Libro libro = new Libro("Eric se fue a hacer deporte", false);
		Libro libro2 = new Libro("Eric se rindio", true);
		AlarmaLibro alarma = new AlarmaLibro();
		AlarmaLibro alarma2 = new AlarmaLibro();
		Biblioteca biblioteca = new Biblioteca();
		Biblioteca biblioteca2 = new Biblioteca();
		Compras compra = new Compras();
		Stock stock = new Stock();
		Administracion administracion = new Administracion();
		
		
		alarma.addObserver(compra);
		alarma.addObserver(stock);
		alarma.addObserver(administracion);
		biblioteca.devolverLibro(libro, alarma);
		biblioteca.devolverLibro(libro2, alarma2);

	}
}
