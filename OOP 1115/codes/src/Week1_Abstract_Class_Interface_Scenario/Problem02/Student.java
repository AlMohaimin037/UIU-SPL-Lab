package Week1_Abstract_Class_Interface_Scenario.Problem02;

public class Student extends Person {
    private String major;

    public Student(String name, int age, String major) {
        super(name, age);
        this.major = major;
    }

    public String getMajor() {
        return major;
    }

    public void setMajor(String major) {
        this.major = major;
    }

    @Override
    public void display() {
        super.display();
        System.out.println("Major: " + getMajor());
    }
}
