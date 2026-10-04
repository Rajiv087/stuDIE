class bankAccount{
    String accHolder;
    int balance;
    bankAccount(String accHolder, int balance) {
        this.accHolder = accHolder;
        this.balance = balance;
        System.out.println("Account Holder: "+accHolder);
        System.out.println("Balance: "+balance);
    }

    class Transaction{
        int deposit;
        int withdrawl;

        int set_deposit(int deposit) {
            balance = balance + deposit;
            return balance;
        }

        int get_withdrawl(int withdrawl) {
            balance = balance - withdrawl;
            return balance;
        }
    }
}


public class Main4 {
    public static void main(String[] args) {
        bankAccount b1 = new bankAccount("Rajiv", 1000);
        bankAccount.Transaction T1 = b1.new Transaction();

        System.out.println("Deposit: 500\nTotal Balance: " + T1.set_deposit(500));
        System.out.println("Withdrawl: 500\nTotal Balance: "+ T1.get_withdrawl(500));

    }
}
