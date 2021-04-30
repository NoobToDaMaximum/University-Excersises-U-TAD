package DecoratorPatternCaseStudy1;

public class Student {
	
	private String name;
	private Reward reward;
	
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public Reward getReward() {
		return reward;
	}
	public void setReward(Reward reward) {
		this.reward = reward;
	}
	
	public int getNumReward() {
		return reward.getNumReward();
	}
	
	public Student(String name) {
		this.name = name;
		reward = new StickerReward();
	}
	
	public Student() {
		
	}
	
	public String toString() {
		return getNumReward() + " rewards. " +  name + " from class c" + reward.getDesc();
	}
}
