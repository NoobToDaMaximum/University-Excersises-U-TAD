package decoratorPattern;

public class TomatoesComponentDecorator extends PizzaToppings{

	private final Pizza pizza;
	
	public TomatoesComponentDecorator(Pizza pizza) {
		this.pizza = pizza;
	}
	
	public String getDesc() {
		return pizza.getDesc() + " Tomatoes (1.20)";
	}
	public Double getPrice() {
		return 1.20 + pizza.getPrice();
	}
	@Override
	public int getNumTopping() {
		// TODO Auto-generated method stub
		return 1 + pizza.getNumTopping();
	}
}
