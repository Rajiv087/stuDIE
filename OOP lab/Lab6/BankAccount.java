package Lab6;

import java.util.Objects;

class bankAccount {
   String accHolder;
   int balance;

   bankAccount(String var1, int var2) {
      this.accHolder = var1;
      this.balance = var2;
      System.out.println("Account Holder: " + var1);
      System.out.println("Balance: " + var2);
   }

   class Transaction {
      int deposit;
      int withdrawl;

      Transaction() {
         Objects.requireNonNull(bankAccount.this);
         super();
      }

      int set_deposit(int var1) {
         bankAccount.this.balance += var1;
         return bankAccount.this.balance;
      }

      int get_withdrawl(int var1) {
         bankAccount.this.balance -= var1;
         return bankAccount.this.balance;
      }
   }
}
