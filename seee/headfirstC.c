#include<stdio.h>

// int main()
// {
//    int card_count = 11;
//    if (card_count > 10)
//     puts("The deck is hot. Increase bet.");
// }

// int main()
// {
//     int c = 10;
//     while (c>0)
//         {
//             puts("I should not write the code in class .");
//             c = c - 1 ;
//         }
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     char ex[20];
//     puts("Enter boyfriend's name: ");
//     scanf("%19s",ex);
//     printf("Dear %s , \n\nYou're history now.\n",ex);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     char suits = 'D';
//     switch (suits)
//     {
//         case 'C':
//             puts("Clubs");
//             break;
//         case 'D':
//             puts("Diamonds");
//             break;
//         case 'H':
//             puts("Hearts");
//             break;
//         default :
//             puts("Spades");
//             break;
//     }
//     return 0;
// }

// }

// #include <stdio.h>
// int main()
// {
//     int decks ;
//     printf("Enter the number of decks: ");
//     scanf("%d",&decks);
//     if (decks < 1)
//         {
//             printf("Invalid number of decks.");
//             return 1;
//         }
//     printf("The total number of cards are %d.",(decks*52));
//     return 0;
// }


// int main() {
//     int cards = 1;
//     if (cards >1)
//         cards = cards -1;
//         if (cards <7)
//             puts("small card.");
//     else {
//         puts("ACE!!!");
//     }
//     return 0;
// }


// int larger ( int a , int b ) {
//     if (a>b)
//         return a;
//     return b;
// }
// int main() {
//     int greatest = larger (100,1000);
//     printf("The greatest of these two numbers is %i",greatest);
//     return 0;
// }

// int y = 0 ;
// int main()
// {
//     int x = 4;
//     printf("The memory address of x is: %p\n",&x);
//     printf("The memory address of y is: %p\n",&y);
//     return 0;

// }

// #include <stdio.h>
// void fortune_cookies(char msg[])
// {
//     printf("Message reads: %s\n", msg);
//     printf("Msg occupies %i bytes.",sizeof(msg));
// }
// int main()
// {
//     char quote[] = "Cookies make you fat";
//     fortune_cookies(quote);
//     return 0;

// 'sizeof' will return the size of 'char' and not the size that it takes up in the system

// int main(){
//     printf("Size of int: %d\n",(sizeof("Turtles!"))-1);
//     return 0;
// }

// char quote[] = "Cookies make you look fat";
// int main(){
//     printf("The quote string is stored in :%p\n",quote[]);
//     printf("The quote takes up %d bytes",sizeof(quote));
//     return 0;
// }

// int main()
// {
//     char s[] = "How big is it?";
//     char *t = s;
//     printf("%d,%d \n",sizeof(s),sizeof(t));
//     int drinks[] = {4,2,3};
//     printf("1st order : %d\n",drinks[0]);
//     printf("1st order : %d\n",*drinks);
//     printf("3rd order : %d\n",drinks[2]);
//     printf("3rd order : %d\n",*(drinks) + 2);
//     return 0;
//}

// void skip(char *msg)
// {
// puts(msg + 6 );
// }
// int main()
// {
//     char *msg_from_amy = "Don't call me";
//     skip(msg_from_amy);
//     int nums[] = {1, 2, 3};
//     printf("nums is at %p\n", nums);
//     printf("nums + 1 is at %p\n", nums + 1);
// }

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// int main() {
//     char card_name[3];
//     puts("Enter the name of your card_name: ");
//     scanf("%2s",card_name);
//     int val = 0 ;
//     if (card_name[0] == 'K') {
//         val = 10;
//     }
//     else if (card_name[0] == 'Q') {
//         val = 10;
//     }
//     else if (card_name[0] == 'J') {
//         val = 10;
//     }
//     else if (card_name[0] == 'A') {
//         val = 11;
//     }
//     else {
//         val = atoi(card_name);
//     }
//     printf("The value of your card_name is : %d\n",val);
//     int count = 0 ;
//     if (val >=3 && val <= 6) {
//         count = count + 1;
//         printf("Count one up.\nCount: %i \n",count);
//     }
//     if (val == 'K' || val == 'Q' || val == 'J' || val == 'A' || val == 10) {
//         count = count - 1;
//         printf("Count one down .\nCount: %i \n",count);
//     }

//     return 0 ;
// }

// rewriting the code using switch case statements

// int main() {
//     char card_name[3];
//     puts("Enter the name of your card_name: ");
//     scanf("%2s",card_name);
//     int val = 0 ;
//     switch (card_name[0]) {
//         case 'K':
//             val = 10;
//             // break;
//         case 'Q':
//             val = 10;
//             // break;
//         case 'J':
//             val = 10;
//             // break;
//         case 'A':
//             val = 11;
//             // break;
//         default:
//             val = atoi(card_name);
//     }
//     printf("The value of your card_name is : %d\n",val);
//     return 0;
// }

// Instead of writing different lines of case K , case Q , etc , i can just write it like this - 

// int main() {
//     char card_name[3];
//     puts("Enter the name of your card_name: ");
//     scanf("%2s",card_name);
//     int val = 0 ;
//     switch (card_name[0]) {
//         case 'K':
//         case 'J':
//         case 'Q':
//             val = 10;
//             break;
//         case 'A':
//             val = 11;
//             break;
//         default:
//             val = atoi(card_name);
//     }
//     printf("The value of your card_name is : %d\n",val);
//     return 0;
// }

//MODIFYING THE PROGRAM USING WHILE LOOP
int main() {
    char card_name[3];
    int count = 0 ;
    while (card_name[0] != 'X') {
        puts("Enter the card_name: ");
        scanf("%2s",card_name);
        int val = 0 ;
        switch (card_name[0]) {
            case 'K':
            case 'Q':
            case 'J':
                val = 10;
                break;
            case 'A':
                val = 11;
                break;
            case 'X':
                puts("Program ended .");
                break;
            default:
                val = atoi(card_name);
            if (val < 1 || val > 11) {
                puts("Wrong card number .");
                continue;
            }
            if ((val >2) && (val < 7)) {
                count ++ ;
            } else if (val == 10)
                count --;
        }
        printf("Current Count : %d\n",count);
    }
    return 0;
}


#include <stdio.h>
// void go_south_east(int lat , int lon)
// {
//     lat = lat - 1 ; 
//     lon = lon + 1 ;
// }
// int main()
// {
//     int latitude = 32;
//     int longitude = -64;
//     go_south_east(latitude,longitude);
//     printf("Avast! Now at: [%i,%i]\n", latitude , longitude);
//     return 0;
// }
// This code will not work as intended because when i pass the latitude and longitude variables as arguments , 
//these do not actually pass as arguments , its just their value that is passed so 
// here we will have to use pointers .


// Enhanced version of the above code using pointers 
#include <stdio.h>
void go_south_east(int *lat , int *lon)
{
    *lat = *lat - 1 ;
    *lon = *lon + 1 ;
}

int main()
{
    int latitude = 32;
    int longitude = -64;
    go_south_east(&latitude,&longitude);
    printf("Avast! Now at: [%i,%i]\n", latitude , longitude);
    return 0;
}

