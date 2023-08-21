package Online04;

public class Main {
    public static void main(String[] args) {
        DataProcessor dataProcessor = new DataProcessor();
        dataProcessor.readDataFromFile("src\\Online04\\input.txt");

        // Find student with the highest average score and display it
        dataProcessor.findStudentWithHighestAverage();
        System.out.println();
        
        // Display all students' details
        dataProcessor.displayAllStudents();

        // Search for a student by name
        String searchItem = "John";
        dataProcessor.searchStudentByName(searchItem);

        // Write sorted data to an output file
        dataProcessor.writeSortedDataToFile("src\\Online04\\output.txt");
    }
}
