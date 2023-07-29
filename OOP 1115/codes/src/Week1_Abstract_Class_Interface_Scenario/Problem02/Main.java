package Week1_Abstract_Class_Interface_Scenario.Problem02;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        System.out.println("Enter the name of the person:");
        String name = in.nextLine();

        System.out.println("Enter the age of the person:");
        int age = in.nextInt();
        in.nextLine(); // Consume the newline character after the nextInt()

        System.out.println("Enter the major of the student:");
        String major = in.nextLine();

        System.out.println("Enter the GPA of the graduate student:");
        double gpa = in.nextDouble();

        Person person = new Person(name, age);
        Student student = new Student(name, age, major);
        GraduateStudent graduateStudent = new GraduateStudent(name, age, major, gpa);

        System.out.println("\nPerson's Information:");
        person.display();

        System.out.println("\nStudent's Information:");
        student.display();

        System.out.println("\nGraduate Student's Information:");
        graduateStudent.display();

        in.close();
    }
}
