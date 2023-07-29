package Week1_Abstract_Class_Interface_Scenario.Problem01;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        // Get information for BankAccount
        System.out.println("Enter Bank Account Information: ");
        System.out.println("Account Holder Name: ");
        String bankAccountHolderName = in.nextLine();
        System.out.println("Account Number: ");
        long bankAccountNumber = in.nextLong();
        System.out.println("Balance: ");
        double bankAccountBalance = in.nextDouble();

        BankAccount bankAccount = new BankAccount(bankAccountHolderName, bankAccountNumber, bankAccountBalance);

        // Get information for CheckingAccount
        System.out.println("Enter Checking Account Information: ");
        System.out.println("Account Holder Name: ");
        in.nextLine(); // Clear the input buffer
        String checkingAccountHolderName = in.nextLine();
        System.out.println("Account Number: ");
        long checkingAccountNumber = in.nextLong();
        System.out.println("Balance: ");
        double checkingAccountBalance = in.nextDouble();
        System.out.println("Overdraft Limit: ");
        double overdraftLimit = in.nextDouble();

        CheckingAccount checkingAccount = new CheckingAccount(checkingAccountHolderName, checkingAccountNumber, checkingAccountBalance, overdraftLimit);

        // Display information for both accounts
        System.out.println("\nBank Account Information: ");
        bankAccount.display();

        System.out.println("\nChecking Account Information: ");
        checkingAccount.display();

        in.close();
    }
}
