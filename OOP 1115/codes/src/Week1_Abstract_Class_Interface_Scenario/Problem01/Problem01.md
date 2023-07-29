Problem Statement:

Create a BankAccount class and a CheckingAccount class that inherit from the
BankAccount class. The CheckingAccount class should have an additional attribute called
overdraft. The CheckingAccount class should override the display() method from the
BankAccount class to print out the checking account's information, including the overdraft
attribute. The main() method of the program should create a BankAccount object and a
CheckingAccount object. The program should then prompt the user to enter the information
for the bank account and the checking account, and then display the information for both
objects.

Input:

The user will be prompted to enter the following information:

    ● The name of the account holder
    ● The account number
    ● The balance of the account
    ● The overdraft limit of the checking account

Output:

The program should print out the following information:

    ● The name of the account holder
    ● The account number
    ● The balance of the account
    ● The overdraft limit of the checking account

Hints:

    ● Use the private access specifier to hide the attributes of the BankAccount and
    CheckingAccount classes.
    ● Use the super() keyword to call the constructor of the BankAccount class from the
    CheckingAccount class constructor.
    ● Use the override keyword to override the display() method from the BankAccount
    class in the CheckingAccount class.
    ● Use the Scanner class to prompt the user to enter the information for the bank
    account and the checking account.

Expected Output:

Name: John Doe
Account Number: 123456789
Balance: 1000
Overdraft Limit: 500
