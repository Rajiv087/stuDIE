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
//
//     return 0 ;
// }

// rewriting the code using switch case statements
//
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
// int main() {
//     char card_name[3];
//     int count = 0 ;
//     while (card_name[0] != 'X') {
//         puts("Enter the card_name: ");
//         scanf("%2s",card_name);
//         int val = 0 ;
//         switch (card_name[0]) {
//             case 'K':
//             case 'Q':
//             case 'J':
//                 val = 10;
//                 break;
//             case 'A':
//                 val = 11;
//                 break;
//             case 'X':
//                 puts("Program ended .");
//                 break;
//             default:
//                 val = atoi(card_name);
//             if (val < 1 || val > 11) {
//                 puts("Wrong card number .");
//                 continue;
//             }
//             if ((val >2) && (val < 7)) {
//                 count ++ ;
//             } else if (val == 10)
//                 count --;
//         }
//         printf("Current Count : %d\n",count);
//     }
//     return 0;
// }



int main()
{
    int age;
    char nationality[50];
    printf("Enter your age: ");
    scanf("%d\n",&age);
    printf("Enter your nationality: ");
    scanf("%49s", nationality);
    if ( age >=18 && strcmp(nationality, "indian") == 0)
        printf("Eligible to vote");
    else
        printf("Not eligible to vote");
    return 0;
}
