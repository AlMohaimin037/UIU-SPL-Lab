package Week1_Abstract_Class_Interface_Scenario.Problem01;

public class BankAccount {
    private String accountHolderName;
    private long accountNumber;
    private double balance;
    
    public BankAccount(String accountHolderName, long accountNumber, double balance) {
        this.accountHolderName = accountHolderName;
        this.accountNumber = accountNumber;
        this.balance = balance;
    }

    public String getAccountHolderName() {
        return accountHolderName;
    }

    public long getAccountNumber() {
        return accountNumber;
    }

    public double getBalance() {
        return balance;
    }

    public void setBalance(double balance) {
        this.balance = getBalance() + balance;
    }

    public void display() {
        System.out.println("Name: " + getAccountHolderName());
        System.out.println("Account Number: " + getAccountNumber());
        System.out.println("Balance: " + getBalance());
    }
}
