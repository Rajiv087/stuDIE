public class Armstrong{
    public static void main(String args[]) {
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
}