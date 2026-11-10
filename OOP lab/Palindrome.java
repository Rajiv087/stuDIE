import java.util.Scanner;

// Class 1: Check whether a string is palindrome
class Palindrome {
    void checkPalindrome(String str) {
        String reverse = "";

        for (int i = str.length() - 1; i >= 0; i--) {
            reverse = reverse + str.charAt(i);
        }

        if (str.equalsIgnoreCase(reverse)) {
            System.out.println("The string is a Palindrome.");
        } else {
            System.out.println("The string is not a Palindrome.");
        }
    }
}

// Class 2: Display frequency of each character
class Frequency {
    void displayFrequency(String str) {
        boolean[] visited = new boolean[str.length()];

        System.out.println("\nFrequency of each character:");

        for (int i = 0; i < str.length(); i++) {

            if (visited[i]) {
                continue;
            }

            int count = 1;

            for (int j = i + 1; j < str.length(); j++) {
                if (str.charAt(i) == str.charAt(j)) {
                    count++;
                    visited[j] = true;
                }
            }

            System.out.println(str.charAt(i) + " = " + count);
        }
    }
}

// Class 3: Find the first non-repeating character
class FirstNonRepeating {
    void findFirstNonRepeating(String str) {

        for (int i = 0; i < str.length(); i++) {
            int count = 0;

            for (int j = 0; j < str.length(); j++) {
                if (str.charAt(i) == str.charAt(j)) {
                    count++;
                }
            }

            if (count == 1) {
                System.out.println(
                    "First non-repeating character: " + str.charAt(i)
                );
                return;
            }
        }

        System.out.println("There is no non-repeating character.");
    }
}

public class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a string: ");
        String str = sc.nextLine();

        // Create objects
        Palindrome p = new Palindrome();
        Frequency f = new Frequency();
        FirstNonRepeating n = new FirstNonRepeating();

        // Call the functions
        System.out.println("\n1. Palindrome Check:");
        p.checkPalindrome(str);

        System.out.println("\n2. Character Frequency:");
        f.displayFrequency(str);

        System.out.println("\n3. First Non-Repeating Character:");
        n.findFirstNonRepeating(str);

        sc.close();
    }
}
