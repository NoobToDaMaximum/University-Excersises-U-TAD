package decoratorPattern;

public class RedOnionsComponentDecorator extends PizzaToppings{

	private final Pizza pizza;
	
	public RedOnionsComponentDecorator(Pizza pizza) {
		this.pizza = pizza;
	}
	
	public String getDesc() {
		return pizza.getDesc() + " Red Onions (0.8)";
	}
	public Double getPrice() {
		return 0.8 + pizza.getPrice();
	}

	@Override
	public int getNumTopping() {
		// TODO Auto-generated method stub
		return 1 + pizza.getNumTopping();
	}
}
