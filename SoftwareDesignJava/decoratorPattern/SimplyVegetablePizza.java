package decoratorPattern;

public class SimplyVegetablePizza extends Pizza{

	@Override
	public String getDesc() {
		// TODO Auto-generated method stub
		return "SimplyVegetablePizza (8.0)";
	}

	@Override
	public Double getPrice() {
		// TODO Auto-generated method stub
		return 8.0;
	}

	@Override
	public int getNumTopping() {
		// TODO Auto-generated method stub
		return 0;
	}

}
