package Problem02;

import java.io.*;

public class Main {
    public static void main(String[] args) {
        String inputFilePath = "src\\Problem02\\Sample Input.txt";
        String outputFilePath = "src\\Problem02\\Sample Output.txt";
        
        try {
            BufferedReader reader = new BufferedReader(new FileReader(inputFilePath));
            BufferedWriter writer = new BufferedWriter(new FileWriter(outputFilePath));
            
            String line;
            String[] lastThreeLines = new String[3];
            int lineCount = 0;
            
            // Read lines from the input file and keep track of the last three lines
            while ((line = reader.readLine()) != null) {
                lastThreeLines[lineCount % 3] = line; // Overwriting the oldest line when the array is full.
                lineCount++;
            }
            
            // Write the last three lines to the output file
            int startIdx = (lineCount <= 3) ? 0 : (lineCount % 3);
            for (int i = startIdx; i < startIdx + 3; i++) {
                if (lastThreeLines[i % 3] != null) {
                    writer.write(lastThreeLines[i % 3]);
                    writer.newLine();
                }
            }
            
            reader.close();
            writer.close();
            
            System.out.println("Last three lines written to " + outputFilePath);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
