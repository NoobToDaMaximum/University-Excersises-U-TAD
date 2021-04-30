package decoratorPattern;

public class MeatComponentDecorator extends PizzaToppings{

	private final Pizza pizza;
	
	public MeatComponentDecorator(Pizza pizza) {
		this.pizza = pizza;
	}
	
	public String getDesc() {
		return pizza.getDesc() + " Meat (4.25)";
	}
	public Double getPrice() {
		return 4.25 + pizza.getPrice();
	}
	@Override
	public int getNumTopping() {
		// TODO Auto-generated method stub
		return 1 + pizza.getNumTopping();
	}
}
