package Week1_Abstract_Class_Interface_Scenario.Problem02;

public class GraduateStudent extends Student {
    private double gpa;

    public GraduateStudent(String name, int age, String major, double gpa) {
        super(name, age, major);
        this.gpa = gpa;
    }

    public double getGpa() {
        return gpa;
    }

    public void setGpa(float gpa) {
        this.gpa = gpa;
    }

    @Override
    public void display() {
        super.display();
        System.out.println("GPA: " + getGpa());
    }
}
