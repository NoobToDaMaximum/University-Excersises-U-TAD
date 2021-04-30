package DecoratorPatternCaseStudy1;

public class RewardBook extends Reward{

	private Reward reward;
	private String name;
	
	public RewardBook(Reward reward, String name) {
		// TODO Auto-generated constructor stub
		this.setReward(reward);
		this.setName(name);
	}
	@Override
	public Reward getReward() {
		// TODO Auto-generated method stub
		return reward;
	}

	@Override
	public String toString() {
		// TODO Auto-generated method stub
		return getNumReward() + " rewards. " + getDesc();
	}

	@Override
	public int getNumReward() {
		// TODO Auto-generated method stub
		return 1 + reward.getNumReward();
	}

	@Override
	public String getDesc() {
		// TODO Auto-generated method stub
		return reward.getDesc() + ", Book: " + getName();
	}
	public void setReward(Reward reward) {
		this.reward = reward;
	}
	
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}

}
