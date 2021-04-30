package decoratorPattern;

public class ChickenComponentDecorator extends PizzaToppings{

	private final Pizza pizza;
	
	public ChickenComponentDecorator(Pizza pizza) {
		this.pizza = pizza;
	}
	
	public String getDesc() {
		return pizza.getDesc() + " Chicken (2.75)";
	}
	public Double getPrice() {
		return 2.75 + pizza.getPrice();
	}
	@Override
	public int getNumTopping() {
		// TODO Auto-generated method stub
		return 1 + pizza.getNumTopping();
	}
}
