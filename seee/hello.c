//       FIRST PROGRAM
//      FAHRENHEIT TO CELCIUS
#include <stdio.h>
// int main()
// {
//     printf("\tFahrenheit to Celcius Converstion Table\n");
//     float fahr , cel , max , gap;
//     fahr = 0;
//     max = 300;
//     gap = 20;
//     while (fahr<=max)
//     {
//         cel = (5*(fahr-32))/9;
//         printf("%3.0f %15.2f\n",fahr,cel);
//         fahr = fahr + gap;
//     }
// }

//          CELCIUS TO FAHRENHEIT TABLE
// int main()
// {
//     printf("Celcius to Fahrenheit Conversion Table\n");
//     float fahr , cel , top , gap;
//     cel = 0;
//     top = 300;
//     gap = 20;
//     while (cel<=top)
//     {
//         fahr = (5*cel + 32*9)/9;
//         printf("%3.0f\t\t%6.2f\n",cel , fahr);
//         cel = cel + gap;
//     }
// }


//           FOR LOOP
// #include <stdio.h>
// int main()
// {
//     int fahr;
//     for (fahr = 300 ; fahr >=0 ; fahr = fahr - 20)
//         printf("%3d\t\t%6.2f\n", fahr , 5.0/9.0 * (fahr - 32));
//     return 0;

//       SYMBOLIC CONSTANTS
// #include <stdio.h>
// #define LOWER 0
// #define UPPER 300
// #define STEP 20
// void main()
// {
//     int fahr;
//     for (fahr = LOWER ; fahr <= UPPER ; fahr = fahr + STEP)
//         printf("%3d\t\t%6.2f\n",fahr , 5.0/9.0 * (fahr - 32));
// }

/*copy input to output*/
// int main()
// {
//     int c;
//     c = getchar();
//     while (c != EOF)
//     {
//         putchar(c);
//         c = getchar();
//     }
//     return 0;
// }


// void main()
// {
//     int c;
//     while ((c = getchar()) != EOF)
//         putchar(c);
// }

// #include <stdio.h>
// void main()
// {
//     int c;
//     while (c = getchar() != EOF)
//         // putchar(c);
//         printf("%d", putchar(c));

// }

// int main()
// {
//     int c;
//     while ((int c = getchar()) = EOF)
//         putchar(c);
// }

// To count the number of characters
// #include <stdio.h>
// int main()
// {
//     long nc =0;
//     int c;
//     while ((c = getchar()) != EOF)
//         ++nc;
//     printf("%ld", nc);
// }

// same thing but we'll use for loop and double (double precision float)

// int main()
// {
//     long nc;
//     int c;
//     for (nc = 0 ; c = (getchar()!=EOF) ; ++nc)
//         ;
//     printf("%.0f\n",nc);
// }


// int main()
// {
//     int c ;
//     c = getchar();
//     while (c != EOF)
//         putchar(c);
//         c = getchar();
// }

// int main()
// {
//     int n;
//     int Sum = 0 ;
//     for (n = 0 ; n<=50 ; n=n+2)
//         Sum = Sum + n;
//     printf("%d",Sum);
//     return 0;
// }

// int main()
// {
//     int n ;
//     int sum = 0 ;
//     while (n<=50)
//     {
//         sum = sum + n ;
//         n = n +2 ;
//     }
//     printf("%d\n",sum);
//     return 0;
// }

// int main()
// {
//     int n ;
//     int sum = 0 ;
//     for (n = 0 ; n <= 50 ; n+=2)
//         sum = sum + n ;
//     printf("%d\n",sum);
//     return 0;
// }


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
// }

// void skip(char *msg)
// {
// puts(msg + 6 );
// }
// int main()
// {
//     // char *msg_from_amy = "Don't call me";
//     // skip(msg_from_amy);
//     int nums[] = {1, 2, 3};
//     printf("nums is at %p\n", nums);
//     printf("nums + 1 is at %p\n", nums + 1);
// }

#include <stdio.h>
// int main()
// {
//     int a;
//     printf("Enter the number: ");
//     scanf("%d",&a);
//     int right_shift = a>>3;
//     printf("Right shift by 3: %d", right_shift );
//     return 0;
// }

// int main()
// {
//     int a ;
//     printf("Enter the number: ");
//     scanf("%d",a);
//     if (a%2 == 0 )
//         printf("EVEN\n");
//     else
//         printf("ODD");
//     return 0;
// }

// int main()
// {
//     int n ;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     int factorial  = 1 ;
//     while (n>0){
//         factorial = factorial * n ;
//         n = n -1 ;
//     }
//     printf("%d",factorial);
//     return 0;
// }

// int main()
// {
//     char ch;
//     printf("Enter the letter: ");
//     scanf("%c",&ch);

//     switch(ch){
//         case 'a':
//         case 'e':
//         case 'i':
//         case 'o':
//         case 'u':
//             printf("Vowel");
//             break;

//         default:
//             printf("Consonant");
//             break;
            
//     }
//     return 0;

// }
// Pyramid 
// int main(void)
// {
//     for (int i = 0; i<5; i++)
//     {
//         for (int j = 0; j<=i; j++)
//         {
//             printf("* ");
//         }
//         printf("\n");
        
//     }
// }

// Reverse pyramid 

// int main()
// {
//     for (int i = 1; i<=5; i++)
//     {
//         for (int j = 5; j>=i; j--)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
// }

// right aligned triangle 
// int main()
// {
//     for (int i=1; i<=5; i++)
//     {
//         {
//             for (int k=5; k>i; k--)
//             {
//                 printf(" ");
//             }
//         }
//         for (int j=1; j<=i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
// }

// Inverted right aligned triangle
// int main()
// {
//     for (int i=1; i<=5; i++)
//     {
//         for (int k=1; k<i; k++)
//         {
//             printf(" ");
//         }
//         for (int j=5; j>=i; j--)
//         {
//             printf(" *");
//         }
//         printf("\n");
//     }
// }

// Full triangle
// int main()
// {
//     int n;
//     printf("Enter the value of n: ");
//     scanf("%d",&n);
    
//     for (int i=1; i<=n; i++)
//     {
//         for (int space = (2*n + 1)/2; space>0; space--)
//         {
//             printf(" ");
//         }
//         for (int j=1; j<=i; j++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
// }

// int main()
// {
//     int n , flag = 1;
//     printf("Enter the value of number: ");
//     scanf("%d",&n);
//     for (int i=2; i<=n/2; i++)
//     {
//         if (n%i ==0)
//             {
//                 flag = 0;
//                 break;
//             }
//     }
//     if (flag == 0)
//         printf("Number is not prime ");
//     else
//         printf("Number is prime");
//     return 0;
// }

// int main()
// {
//     int n ;
//     printf("Enter the value of number: ");
//     scanf("%d",&n);
//     int i = n-1;
//     while (i>0)
//     {
//         n = n*i;
//         i--;
//     }
//     printf("Factorial: %d",n);
//     return 0;
// }

// int main()
// {
//     for (int i=1; i<=5; i++)
//         {
//             for (int j=5; j>=i; j--)
//             {
//                 printf("*");
//             }
//             printf("\n");
//         }
//         return 0;
// }

// int main()
// {
//     int n,c,row,num=1,space;
//     printf("Enter no of rows: ");
//     scanf("%d",&n);
//     space = n;
//     for (row=1; row<=n; row++)
//     {
//         num = row;
//         for (c=1;c<space; c++)
//         {
//             printf(" ");
//         }
//         space--;
//         for (c=1;c<=row;c++)
//         {
//             printf("%d",num);
//             num++;
//         }
//         num = num -2;
//         for (c=1;c<row;c++)
//         {
//             printf("%d",num);
//             num -- ;
//         }
//         printf("\n");
//     }
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int n=1;
//     for (int i=1; i<=4; i++)
//     {
//         for (int j=1; j<=i; j++)
//             {
//                 printf(" %d",n);
//                 n++;
//             }
//             printf("\n");
//     }
//     return 0;
// }

// int main() {
//     int n, i, j;
//     printf("Enter number of rows: ");
//     scanf("%d", &n);
//     for (i = 0; i < n; i++) {
//         int num = 1;
//         for (j = 0; j < n - i; j++) {
//             printf(" ");
//         }
//         for (j = 0; j <= i; j++) {
//             printf("%d ", num);
//             num = num * (i - j) / (j + 1);
//         }
//         printf("\n");
//     }
//     return 0;
// }
#include <stdio.h>
// int main()
// {
//     int year;
//     printf("Enter the year: ");
//     scanf("%d",&year);
//     if (year%4 == 0)
//         {
//             printf("Leap Year");
//         }
//     else
//         {
//             printf("Not Leap Year");
//         }
//     return 0;
// }

// int main()
// {
//     int a , b , c;
//     printf("Enter first number: ");
//     scanf("%d",&a);
//     printf("Enter second number: ");
//     scanf("%d",&b);
//     printf("Enter third number: ");
//     scanf("%d",&c);

//     if (a>b)
//         {
//             if (a>c)
//                 printf("a is greatest");
//         }
//             else 
//                 printf("c ");
//     elif (b>c)
//         printf("b is greatest");
//     else
//         printf("c is greatest");
// }

// Towers of hanoi 
// #include <stdio.h>
// void toh(int n , char A, char B, char C);
// int main()
// {
//     int n;
//     printf("Enter number of discs: ");
//     scanf("%d",&n);
//     toh(n,'A','B','C');
//     return 0;
// }
// void toh(int n, char x, char y, char z)
// {
//     if (n == 0)
//         return;
//     else 
//     {    
//         toh ( n-1 ,x , z, y);
//         printf("move disc %d from source %c to destination %c \n", n , x , z);
//         return toh(n-1,y,x,z);
//     }
// }

                // 2d array 
// creating a 2d array and displaying all the elements 
//{compile time initialization}
// int main()
// {
//     int a[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
//     // printf("%d",a[0][0]);
//     for (int i=0; i<3; i++)
//     {
//         for (int j=0; j<4; j++)
//         {
//             printf("%d\t",a[i][j]);
//         }
//         printf("\n");
//     }
// }

//{run-time initialization}
// #include <stdio.h>
// int main()
// {
//     int p,q;
//     printf("Enter the number of rows and columns: ");
//     scanf("%d%d",&p,&q);
//     int arr[p][q];
//     for (int i=0; i<p; i++)
//     {
//         for (int j=0; j<q; j++)
//         {
//             printf("Enter arr[%d][%d]: ",i,j);
//             scanf("%d",&arr[i][j]);
//         }
//         printf("\n");
//     }

//     for (int a=0;a<p;a++)
//     {
//         for (int b=0; b<q;b++)
//         {
//             printf("%d\t",arr[a][b]);
//         }
//         printf("\n");
//     }
// }

// Printing the diagonal elements of a matrix
// int main()
// {
//     int rows,columns, sum = 0;
//     printf("Enter number of rows and columns: ");
//     scanf("%d %d",&rows,&columns);
//     int arr[rows][columns];
//     for(int i=0;i<rows;i++)
//     {
//         for (int j=0;j<columns;j++)
//         {
//             printf("Enter arr[%d][%d]: ",i,j);
//             scanf("%d",&arr[i][j]);
//         }
//         printf("\n");
//     }

//      for (int a=0;a<rows;a++)
//     {
//         for (int b=0; b<columns;b++)
//         {
//             printf("%d\t",arr[a][b]);
//         }
//         printf("\n");
//     }
//     printf("\n");
//     printf("Diagonal elements are: ");

//     if (rows == columns)
//     {
//         for (int a=0;a<rows;a++)
//         {
//             for (int b=0;b<columns;b++)
//             {
//                 if (a == b)
//                 {
//                     printf("%d\t",arr[a][b]);
//                     sum = sum + arr[a][b];
//                 }
//             }
//         }
//     }
//     else
//     printf("This is not a square matrix ");

//     printf("\nSum of diagonal elements is: %d",sum);

//     return 0;
// }

//Addition of 2 matrices
// int main()
// {
//     int m,n,p,q;
//     printf("Order of first matrix:");
//     scanf("%d %d",&m,&n);
//     printf("Order of second matrix:");
//     scanf("%d %d",&p,&q);

//     int arr1[m][n], arr2[p][q] , sum[m][q];

//     printf("Enter elements of matrix 1: ");
//     for(int i=0;i<m;i++)
//     {
//         for (int j=0;j<n;j++)
//         {
//             printf("Enter arr1[%d][%d]: ",i,j);
//             scanf("%d",&arr1[i][j]);
//         }
//         printf("\n");
//     }

//     printf("Enter elements of matrix 2: ");
//     for(int i=0;i<p;i++)
//     {
//         for (int j=0;j<q;j++)
//         {
//             printf("Enter arr2[%d][%d]: ",i,j);
//             scanf("%d",&arr2[i][j]);
//         }
//         printf("\n");
//     }

//     printf("Matrix 1: \n");
//     for (int a=0;a<m;a++)
//     {
//         for (int b=0; b<n;b++)
//         {
//             printf("%d\t",arr1[a][b]);
//         }
//         printf("\n");
//     }
//     printf("\n");

//     printf("Matrix 2: \n");
//     for (int a=0;a<p;a++)
//     {
//         for (int b=0; b<q;b++)
//         {
//             printf("%d\t",arr2[a][b]);
//         }
//         printf("\n");
//     }
//     printf("\n");

//     if (m==p && n==q)
//     {
//         for (int i=0;i<m;i++)
//         {
//             for(int j=0;j<q;j++)
//             {
//                 sum[i][j] = arr1[i][j] + arr2[i][j];
//                 printf("%d\t",sum[i][j]);
//             }
//             printf("\n");
//         }
//     }
//     else 
//     printf("Order is not same");

// }

// #include <stdio.h>
// int main()
// {
//     FILE *f;
//     f = fopen("file1.txt","w");
//     fprintf(f , "Hello World\n");
//     fprintf(f, "This is my computer programming assfasdfasdf ignment");
//     fclose(f);}

// #include <stdio.h>
// int main()
// {
//     FILE *f;
//     char c;
//     f = fopen("file1.txt","r");
//     printf("Content of file1.txt: \n");
//     while ((c = fgetc(f)) != EOF)\
//         {
//             putchar(c);
//         }
// fclose(f);
// return 0;
// }

// #include <stdio.h>
// struct Point{
//     int x;
//     int y;
// };

// struct City{
//     char name[100];
//     int population;
// };

// int main()
// {
//     // struct Point point = {0,1};
//     // printf("%i %i",point.x , point.y);

//     // struct Point path[] = {{0,1},{2,2},{2,3},{3,4},{4,5}};
//     // for (int i=0; i<5; i++){
//     //     printf("(%i, %i)\t",path[i],path[i]);
//     // }

//     struct City cities[] = {
//             {"Voiletville", 2300},
//             {"Saphire Springs", 4000},
//             {"Glennhaven", 1200}
//     };
//     for (int i=0; i<3; i++){
//         printf("%s %i\n",cities[i].name , cities[i].population);
//     }

#include <stdio.h>

int main() {
    int i = 1;

    do {
        printf("Iteration number: %d\n", i);
        i++; // Increment step
    } while (i == 3);

    return 0;
}
