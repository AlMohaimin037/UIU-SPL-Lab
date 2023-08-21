package Online04;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.List;

public class DataProcessor {
    private List<Student> students;

    public DataProcessor() {
        students = new ArrayList<>();
    }

    public void readDataFromFile(String fileName) {
        try {
            BufferedReader reader = new BufferedReader(new FileReader(fileName));
            String line;
            while ((line = reader.readLine()) != null) {
                String[] parts = line.split(",");
                if (parts.length >= 2) {
                    String name = parts[0];
                    List<Integer> scores = new ArrayList<>();
                    for (int i = 1; i < parts.length; i++) {
                        int score = Integer.parseInt(parts[i]);
                        scores.add(score);
                    }
                    students.add(new Student(name, scores));
                }
            }
            reader.close();
        } catch (IOException | NumberFormatException e) {
            System.err.println("Error reading data from the input file: " + e.getMessage());
        }
    }

    public void findStudentWithHighestAverage() {
        Student highestScoringStudent = null;
        double highestAverage = -1;

        for (Student student : students) {
            double average = student.calculateAverageScores();
            if (average > highestAverage) {
                highestAverage = average;
                highestScoringStudent = student;
            }
        }

        if (highestScoringStudent != null) {
            System.out.println("Student with Highest Average Score:"); 
            highestScoringStudent.displayDetails();
        }
    }

    public void displayAllStudents() {
        for (Student student : students) {
            student.displayDetails();
        }
    }

    public void searchStudentByName(String searchItem) {
        for (Student student : students) {
            if (student.getName().equalsIgnoreCase(searchItem)) {
                student.displayDetails();
                return;
            }
        }
        System.out.println("Student not found with the name: " + searchItem);
    }

    public void writeSortedDataToFile(String fileName) {
        Collections.sort(students, Comparator.comparingDouble(Student :: calculateAverageScores).reversed());
        try {
            BufferedWriter writer = new BufferedWriter(new FileWriter(fileName));
            for (Student student : students) {
                writer.write("Student Name: " + student.getName() + "\n");
                writer.write("Exam Scores: " + student.getExamScores() + "\n");
                writer.write("Average Score: " + student.calculateAverageScores() + "\n\n");
            }
            writer.close();
        } catch (IOException e) {
            System.err.println("Error writing sorted data to the output file: " + e.getMessage());
        }
    }
}
