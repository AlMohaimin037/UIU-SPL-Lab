package zoo;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        Mammal m = new Mammal("Tiger", 20, "Orange");
        Bird b = new Bird("Parrot", 10, 12.5F);
        Reptile r = new Reptile("Snake", 5, "Ash");

        b.sleep(in.nextInt());
        m.eat();
        r.crawl();
    }
}
