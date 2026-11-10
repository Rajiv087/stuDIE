// 6 oct 2026
// 1. Write a program in java to check whether a string entered by a user is palidrome or not ?
// 2. Write a progarm to display teh frequency of each element in a given string ?
// 3. write a program to find the first character in a string that occurs only one 
// 4. write a program to remove duplicate characters from a string by reserving the orders of their first string 
// 5. write a program to check whether two strings are annagrams or not ? 
// 6. write a program to reverse every word of a string 
// 7. write a program to find the longest word in a string


import java.util.Scanner;
import java.util.Arrays;

class Palindrome{
    void checkPalindrome(String Str) {
        String revStr = "";
        for (int i = Str.length() -1; i>=0; i--) {
            revStr = revStr + Str.charAt(i);
        }
        if (Str.equals(revStr)) {
            System.out.println("String is palindrome");
        }
        else {
            System.out.println("String is not palindrome");
        }
    }
}

class Frequency{
    void displayFrequency(String str) {
        boolean[] visited = new boolean[str.length()];
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

class Duplicates{
    void removeDuplicates(String str) {
        char[] arr = str.toCharArray();
        int i = 0;
        for (int j = 1; j<arr.length; j++) {
            if (arr[j] != arr[i]){
                i++;
                arr[i] = arr[j];
            }
        }
        System.out.println("String after removing duplicates: " + str);
    }
}

class nonRepeating{
    void FirstNonRepeating(String str) {
        for (int i = 0; i<str.length(); i++) {
            int count = 0;

            for (int j = 0; j<str.length(); j++) {
                if (str.charAt(i) == str.charAt(j)){
                    count++;
                }
            }
            if (count == 1) {
                System.out.println("\nFirst non repeating character is: " + str.charAt(i));
                return;
            }
        }
    }
}


class Anagram {

    public static void checkAnagram(String str1, String str2) {
        char[] a = str1.toLowerCase().toCharArray();
        char[] b = str2.toLowerCase().toCharArray();

        Arrays.sort(a);
        Arrays.sort(b);

        if (Arrays.equals(a,b)) {
            System.out.println("Strings are anagrams\n");
        }
        else {
            System.out.println("Strings are not anagrams\n");
        }
    }
}

class ReverseEveryWord {

    void reverseWords(String str) {
        String[] words = str.split(" ");
        String result = "";

        for (String word : words) {
            String reverse = "";

            for (int i = word.length() - 1; i >= 0; i--) {
                reverse = reverse + word.charAt(i);
            }

            result = result + reverse + " ";
        }

        System.out.println("Reversed every word: " + result.trim());
    }
}

class LongestWord {
    void findLongestWord(String str) {
        String[] words = str.split(" ");
        String longest = "";

        for (String word : words) {
            if (word.length() > longest.length()) {
                longest = word;
            }
        }

        System.out.println("Longest word is: " + longest); 
    }
}


public class Lab7{
    public static void main (String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a string: ");
        String str = sc.nextLine();

        Palindrome p = new Palindrome();
        System.out.println("Palindrome: ");
        p.checkPalindrome(str);

        Frequency f = new Frequency();
        System.out.println("\nFrequency of each element: ");
        f.displayFrequency(str);

        nonRepeating n = new nonRepeating();
        n.FirstNonRepeating(str);

        
        ReverseEveryWord r = new ReverseEveryWord();
        r.reverseWords(str);

        LongestWord l = new LongestWord();
        l.findLongestWord(str);

        System.out.println("Enter first string: ");
        String str1 = sc.nextLine();

        System.out.println("Enter second string: ");
        String str2 = sc.nextLine();
        Anagram a = new Anagram();
        a.checkAnagram(str1, str2);

        sc.close();
    }
}