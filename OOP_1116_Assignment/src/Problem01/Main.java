package Problem01;

import java.io.*;

public class Main {
    public static void main(String[] args) {
        String inputFilePath = "src\\Problem01\\Sample Input.txt";
        String outputFilePath = "src\\Problem01\\Sample Output.txt";

        try {
            BufferedReader reader = new BufferedReader(new FileReader(inputFilePath));
            BufferedWriter writer = new BufferedWriter(new FileWriter(outputFilePath));

            String line;
            // This loop reads each line from the input file using reader.readLine(). 
            while ((line = reader.readLine()) != null) {
                /*
                 * For each line, it splits the line into words using line.split("\\s+"), 
                 * where "\\s+" is a regular expression that matches one or more whitespace characters. 
                 */
                String[] words = line.split("\\s+");
                for (int i = words.length - 1; i >= 0; i--) {
                    writer.write(words[i] + " ");
                }
                writer.write("\n");
            }

            reader.close();
            writer.close();

            System.out.println("Words reversed and written to " + outputFilePath);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
