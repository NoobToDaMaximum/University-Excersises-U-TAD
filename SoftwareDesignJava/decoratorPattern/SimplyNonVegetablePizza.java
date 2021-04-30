package decoratorPattern;

public class SimplyNonVegetablePizza extends Pizza{

	@Override
	public String getDesc() {
		// TODO Auto-generated method stub
		return "SimplyNonVegetablePizza (9.0)";
	}

	@Override
	public Double getPrice() {
		// TODO Auto-generated method stub
		return 9.0;
	}

	@Override
	public int getNumTopping() {
		// TODO Auto-generated method stub
		return 0;
	}

}
