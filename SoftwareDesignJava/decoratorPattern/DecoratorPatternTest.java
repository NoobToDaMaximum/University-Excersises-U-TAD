package decoratorPattern;

public class DecoratorPatternTest {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Pizza pizza = new SimplyVegetablePizza();
		
		System.out.println(pizza.getDesc() + " Cost: " + pizza.getPrice() + " Topings num: " + pizza.getNumTopping());
		
		Pizza pizzaVegetal = new SimplyVegetablePizza();
		pizzaVegetal = new SpinachComponentDecorator(pizzaVegetal);	
		pizzaVegetal = new BroccoliComponentDecorator(pizzaVegetal);
		pizzaVegetal = new DiscountComponentDecorator(pizzaVegetal);
		System.out.println(pizzaVegetal.getDesc() + " Cost: " + pizzaVegetal.getPrice() + " Topings num: " + pizzaVegetal.getNumTopping());
	}

}
