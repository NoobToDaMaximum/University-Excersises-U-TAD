package decoratorPattern;

public class SpinachComponentDecorator extends PizzaToppings{

	private final Pizza pizza;
	
	public SpinachComponentDecorator (Pizza pizza) {
		this.pizza = pizza;
	}
	
	public String getDesc() {
		return pizza.getDesc() + " Spinach (1.5)";
	}
	public Double getPrice() {
		return 1.50 + pizza.getPrice();
	}
	public int getNumTopping() {
		return 1 + pizza.getNumTopping();
	}
}
