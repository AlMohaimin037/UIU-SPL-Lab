package Final.Problem01;

import java.io.*;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        System.out.println("Input the word you want to find:");
        Scanner in = new Scanner(System.in);
        String searchWord = in.nextLine();

        try {
            BufferedReader reader = new BufferedReader(new FileReader("src\\Final\\Problem01\\input.txt"));
            BufferedWriter writer = new BufferedWriter(new FileWriter("src\\Final\\Problem01\\output.txt"));

            String lines;
            int line= 0;
            while ((lines = reader.readLine()) != null) {
                line++;
               int  count=0;
                String[] words = lines.split(" ");
                for (String word : words) {
                    if (word.equalsIgnoreCase(searchWord)) {
                        count++;
                    }
                }
                if(count > 0) {
                    writer.write(line + "-" + count + "\n");
                }




            }
            writer.close();
            reader.close();
        } catch (IOException ex1) {
            ex1.printStackTrace();
        }
    }
}
