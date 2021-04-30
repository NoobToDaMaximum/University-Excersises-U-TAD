package DecoratorPatternCaseStudy1;

public class DecoratorPatternCaseStudy {
	
	public static void main(String[] args) {
		Student student = new Student("Eriq");
		System.out.println(student.toString());
		
		Student student2 = new Student("Fernanflo");
		student2.setReward(new RewardCertificate(student2.getReward()));
		student2.setReward(new RewardBook(student2.getReward(), "Yeet in the sheet"));
		System.out.println(student2.toString());
	}
}
