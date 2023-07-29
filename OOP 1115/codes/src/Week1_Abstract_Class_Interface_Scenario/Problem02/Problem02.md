Problem Statement:

Create a Person class, a Student class, and a GraduateStudent class. The Student class
should inherit from the Person class, and the GraduateStudent class should inherit from
the Student class. The Student class should have an additional attribute called major. The
GraduateStudent class should have an additional attribute called gpa. The Student class
should override the display() method from the Person class to print out the student's
information, including the major attribute. The GraduateStudent class should override the
display() method from the Student class to print out the graduate student's information,
including the gpa attribute. The main() method of the program should create a Person
object, a Student object, and a GraduateStudent object. The program should then prompt
the user to enter the information for the person, the student, and the graduate student, and
then display the information for all objects.

Input:

The user will be prompted to enter the following information:

    ● The name of the person
    ● The age of the person
    ● The major of the student
    ● The gpa of the graduate student

Output:

The program should print out the following information:

    ● The name of the person
    ● The age of the person
    ● The major of the student
    ● The gpa of the graduate student

Hints:

    ● Use the private access specifier to hide the attributes of the Person, Student, and
    GraduateStudent classes.
    ● Use the super() keyword to call the constructors of the Person class and the
    Student class from the GraduateStudent class constructor.
    ● Use the override keyword to override the display() method from the Person class
    and the Student class in the GraduateStudent class.
    ● Use the Scanner class to prompt the user to enter the information for the person, the
    student, and the graduate student.

Expected Output:

Name: John Doe
Age: 21
Major: Computer Science
GPA: 3.8
