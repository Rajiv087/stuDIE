package Lab1;
public class A {
    public static void main(String args[]) {
        System.out.println("Hello World");

        int num1 = 23;
        int num2 = 12;
        int num3 = 67;
        if(num1 > num2) {
            if(num1 > num3) System.out.println("Num1 is greatest");
            else System.out.println("Num3 is greatest");
        }
        else{
            if(num2>num3) System.out.println("Num2 is greatest");
            else System.out.println("Num3 is greatest");
        }

        int num = 7;
        if(num%2 == 0) System.out.println("Even");
        else System.out.println("Odd");

        int age = 13;
        if(age>=18) System.out.println("Eligibile to vote");
        else System.out.println("Not eligible to vote");

        int n = 23;
        int check = 0;
        if(n<=1) check = 1;
        else{
            for(int i = 2; i*i<=n; i++) {
                if(n%i == 0) {
                    check = 1;
                    break;
                }
            }
        }
        if(check == 0) System.out.println("Prime");
        else System.out.println("Not prime");
    }
}

