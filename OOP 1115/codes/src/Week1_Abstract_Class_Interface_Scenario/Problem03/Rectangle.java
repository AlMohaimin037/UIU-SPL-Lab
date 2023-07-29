package Week1_Abstract_Class_Interface_Scenario.Problem03;

public class Rectangle extends Shape {
    private double width;
    private double length;

    public Rectangle(String color, double width, double length) {
        super("Rectangle", color);
        this.width = width;
        this.length = length;
    }

    public double getWidth() {
        return width;
    }

    public void setWidth(double width) {
        this.width = width;
    }

    public double getLength() {
        return length;
    }

    public void setLength(double length) {
        this.length = length;
    }

    @Override
    public double calculateArea() {
        return getWidth() * getLength();
    }
}
