package ObserverPattern;

import java.util.Observable;
import java.util.Observer;

public class Compras implements Observer{

	@Override
	public void update(Observable arg0, Object arg1) {
		// TODO Auto-generated method stub
		System.out.println("Compras: " + arg1);
	}

}
