Problem Statement:

Create an abstract class called Shape. The Shape class should have two attributes: name
and color. The Shape class should also have an abstract method called calculateArea().
This method should calculate the area of the shape.

Create three classes that inherit from Shape: Circle, Rectangle, and Square. The Circle
class should override the calculateArea() method to calculate the area of a circle. The
Rectangle class should override the calculateArea() method to calculate the area of a
rectangle. The Square class should override the calculateArea() method to calculate the
area of a square.

The main() method of the code should create a Circle object, a Rectangle object, and a
Square object. The code should then call the calculateArea() method on the objects.

Expected Output:

The area of the circle is 3.14159
The area of the rectangle is 100
The area of the square is 100

Hints:

    ● Use the abstract keyword to declare an abstract class.
    ● Use the override keyword to override a method in a derived class.
    ● Use the super keyword to call the parent class's method.
    ● Use the Math class to calculate the area of the circle and the square.