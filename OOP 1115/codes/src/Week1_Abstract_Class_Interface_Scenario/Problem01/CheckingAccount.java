package Week1_Abstract_Class_Interface_Scenario.Problem01;

public class CheckingAccount extends BankAccount {
    private double overdraft;

    public CheckingAccount(String accountHolderName, long accountNumber, double balance, double overdraft) {
        super(accountHolderName, accountNumber, balance);
        this.overdraft = overdraft;
    }

    public double getOverdraft() {
        return overdraft;
    }

    public void setOverdraft(double overdraft) {
        this.overdraft = overdraft;
    }

    @Override
    public void display() {
        super.display();
        System.out.println("Overdraft Limit: " + getOverdraft());
    }
}
