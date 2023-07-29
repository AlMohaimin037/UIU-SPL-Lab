package Week1_Abstract_Class_Interface_Scenario.Problem03;

import java.text.DecimalFormat;

public class Main {
    public static void main(String[] args) {
        DecimalFormat df = new DecimalFormat("#.#####");

        Circle circle = new Circle("Red", 1.0);
        Rectangle rectangle = new Rectangle("Blue", 5.0, 20.0);
        Square square = new Square("Green", 10.0);

        System.out.println("The area of the circle is " + df.format(circle.calculateArea()));
        System.out.println("The area of the rectangle is " + rectangle.calculateArea());
        System.out.println("The area of the square is " + square.calculateArea());
    }
}
