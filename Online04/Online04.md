# Question

Create a program that reads data from an input file (input.txt), performs some calculations on the data, and then writes the results to an output file (output.txt). The input file contains a series of records, where each record consists of the following information:

Student Name (string)
List of Exam Scores (list of integers)

Your program should perform the following steps:
     Create a class Student to represent each student's data. The class should have attributes for the student's name and exam scores.
     Implement a method within the Student class to calculate the average exam score and display it in the console using (System.out).
     Create another class DataProcessor that will handle reading data from the input file and storing it in a list of Student objects.
     In the DataProcessor class, implement a method to find the student with the highest average exam score.
     Implement a method to display the average exam score along with their details in the console using (System.out).
     Implement error handling to gracefully handle cases where the input file is missing or has incorrect data (e.g., negative or categorical value in the exam score).
     Implement sorting algorithms to arrange students based on their average scores and store it in the Output.txt file.
     Implement a method that will take an input from the user and store it in the searchItem (String) variable. If the searchItem matches with any of the student’s name then it will display the student’s name along with the other details in the console.
