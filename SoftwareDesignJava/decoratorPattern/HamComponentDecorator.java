package decoratorPattern;

public class HamComponentDecorator extends PizzaToppings{

	private final Pizza pizza;
	
	public HamComponentDecorator(Pizza pizza) {
		this.pizza = pizza;
	}
	
	public String getDesc() {
		return pizza.getDesc() + " Broccoli (4.12)";
	}
	public Double getPrice() {
		return 4.12 + pizza.getPrice();
	}
	@Override
	public int getNumTopping() {
		// TODO Auto-generated method stub
		return 1 + pizza.getNumTopping();
	}
}

