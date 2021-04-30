package decoratorPattern;

public class CheeseComponentDecorator extends PizzaToppings{
	private final Pizza pizza;
	
	public CheeseComponentDecorator(Pizza pizza) {
		this.pizza = pizza;
	}
	
	public String getDesc() {
		return pizza.getDesc() + " Cheese (2.25)";
	}
	public Double getPrice() {
		return  2.25 + pizza.getPrice();
	}
	@Override
	public int getNumTopping() {
		// TODO Auto-generated method stub
		return 1 + pizza.getNumTopping();
	}
}
