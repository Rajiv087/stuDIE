public class Numberanalyzer {
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

    public static void main(String args[]) {
        Numberanalyzer analyzer = new Numberanalyzer();
        
        analyzer.Analyse(7);
        analyzer.Analyse(13, 21);
        analyzer.Analyse(11, 17, 24);

        for(int i = 1; i<=200; i++) {
            if(i%3==0) continue;
            else if (i%97 == 0) break;
            else System.out.print(i+"\t");
        }
    }
}

