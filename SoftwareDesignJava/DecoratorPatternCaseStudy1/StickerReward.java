package DecoratorPatternCaseStudy1;

public class StickerReward extends Reward{

	private Reward reward;
	
	public StickerReward() {
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
		return 1;
	}

	@Override
	public String getDesc() {
		// TODO Auto-generated method stub
		return ", Sticker";
	}
	public void setReward(Reward reward) {
		this.reward = reward;
	}

}
