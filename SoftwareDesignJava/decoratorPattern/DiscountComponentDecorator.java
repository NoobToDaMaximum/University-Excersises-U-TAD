package decoratorPattern;

public class DiscountComponentDecorator extends PizzaToppings{

	Pizza pizza;

	public DiscountComponentDecorator (Pizza pizza) {
		this.pizza = pizza;
	}
	public String getDesc() {
		return pizza.getDesc();
	}

	public Double getPrice() {
		return pizza.getPrice() * 0.9;
	}

	public int getNumTopping() {
		return pizza.getNumTopping();
	}

}
