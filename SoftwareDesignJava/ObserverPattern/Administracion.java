package ObserverPattern;

import java.util.Observable;
import java.util.Observer;

public class Administracion implements Observer{

	@Override
	public void update(Observable arg0, Object arg1) {
		// TODO Auto-generated method stub
		System.out.println("Administracion: " + arg1);
	}

}
