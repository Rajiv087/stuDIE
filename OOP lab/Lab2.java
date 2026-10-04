public class lab2 {
    public void Analyse (int n) {
        int check = 0;
        if (n<=1) check = 1;
        else{ 
            for(int i = 2; i*i<=n; i++) {
                if (n%i == 0) {
                    check = 1;
                    break;
                }
            }
        }
        if (check == 1) System.out.println("Number is not prime");
        System.out.println("Number is prime");
    }

    public void Analyse(int n, int m) {
        if(n>m) {
            System.out.println("n is greater than m");
        }
        else if (m>n) {
            System.out.println("m is greater than n");
        }
        else System.out.println("n is equal to m");
    }

    public void Analyse(int n, int m, int i) {
        if(n<m) {
            if(n<i) System.out.println("n is smallest");
            else System.out.println("i is smallest");
        }
        else {
            if(m<i) System.out.println("m is smallest");
            else System.out.println("i is smallest");
        }
    }

    public void Armstrong() {
            for (int i = 100;i<=999;i++) {
            int temp = i, arm_num = 0;
            while (temp > 0) {
                int last_digit = temp%10;
                temp = temp/10;
                arm_num = arm_num + last_digit*last_digit*last_digit;
            }
            if(i == arm_num){
                System.out.println("Armstrong number is: " + i);
                break;
            }
        }
    }
    public static void main(String args[]) {
        Lab2 analyzer = new Numberanalyzer();
        
        analyzer.Analyse(7);
        analyzer.Analyse(13, 21);
        analyzer.Analyse(11, 17, 24);

        lab2 Armstrongfinder = new Armstrong();
        

        for(int i = 1; i<=200; i++) {
            if(i%3==0) continue;
            else if (i%97 == 0) break;
            else System.out.print(i+"\t");
        }
    }
}

i wrote three different codes now i want to include these three different codes in one single java file
