package Week1_Abstract_Class_Interface_Scenario.Problem03;

public class Square extends Shape {
    private double side;

    public Square(String color, double side) {
        super("Square", color);
        this.side = side;
    }

    public double getSide() {
        return side;
    }

    public void setSide(double side) {
        this.side = side;
    }

    @Override
    public double calculateArea() {
        return Math.pow(getSide(), 2);
    }
}
