package DecoratorPatternCaseStudy1;

public class RewardCertificate extends Reward{

	private Reward reward;
	
	public RewardCertificate(Reward reward) {
		// TODO Auto-generated constructor stub
		this.setReward(reward);
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
		return reward.getDesc() + ", Certificate";
	}
	public void setReward(Reward reward) {
		this.reward = reward;
	}

}
