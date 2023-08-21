package Online04;

import java.util.List;

public class Student {
    private String name;
    private List<Integer> examScores;

    public Student(String name, List<Integer> examScores) {
        this.name = name;
        this.examScores = examScores;
    }

    public String getName() {
        return name;
    }

    public List<Integer> getExamScores() {
        return examScores;
    }
    
    public double calculateAverageScores() {
        int sum = 0;
        for (int score : examScores) {
            sum += score;
        }
        return (double) sum / examScores.size();
    }

    public void displayDetails() {
        System.out.println("Student Name: " + getName());
        System.out.println("Exam Scores: " + getExamScores());
        System.out.println("Average Score: " + calculateAverageScores());
    }
}
