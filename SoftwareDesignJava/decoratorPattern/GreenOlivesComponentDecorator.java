package decoratorPattern;

public class GreenOlivesComponentDecorator extends PizzaToppings{

	private final Pizza pizza;
	
	public GreenOlivesComponentDecorator(Pizza pizza) {
		this.pizza = pizza;
	}
	
	public String getDesc() {
		return pizza.getDesc() + " Green Olives (3.40)";
	}
	public Double getPrice() {
		return 3.40 + pizza.getPrice();
	}
	@Override
	public int getNumTopping() {
		// TODO Auto-generated method stub
		return 1 + pizza.getNumTopping();
	}
}
