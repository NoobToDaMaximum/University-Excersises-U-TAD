package decoratorPattern;

public class BroccoliComponentDecorator extends PizzaToppings{

	private final Pizza pizza;
	
	public BroccoliComponentDecorator(Pizza pizza) {
		this.pizza = pizza;
	}
	
	public String getDesc() {
		return pizza.getDesc() + " Broccoli (1.25)";
	}
	public Double getPrice() {
		return 1.25 + pizza.getPrice();
	}
	@Override
	public int getNumTopping() {
		// TODO Auto-generated method stub
		return 1 + pizza.getNumTopping();
	}
}
