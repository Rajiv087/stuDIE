// CS50 lec 
#include <stdio.h>

// int main()
// {
//     printf("Do you agree? ");
//     char c ;
//     scanf("%c",&c);

//     if (c == 'y'|| c == 'Y')
//         printf("Agreed.\n");
    
//     else
//         printf("not agreed.\n");
    
//     return 0;
// }

// int main()
// {
//     int i = 3 ;
//     while (i>0)
//     {
//         printf("MEOW\n");
//         i--;
//     }
//     return 0;

// }

// void meow (int n);


// int main()
// {
//         meow(56);
// }
// {
//     for (int i=0; i<=n; i++)
//     printf("meow\n");
// }
//prototype
// void meow(int times);

// int main(void)
// {
//     int n;
//     printf("Enter n: ");
//     scanf("%d",&n);
//     meow(n);
// }

// void meow(int times)
// {
//     for (int i = 0; i <times; i++)
//     printf("meow\n");
// }

// int main(void)
// {
//     for (int i = 0; i<3; i++)
//     {
//         for (int j = 0; j<3; j++)
//         {
//             printf("#");
//         }
//         printf("\n");
//     }
// }

// int main(void)
// {
//     int x , y;
//     printf("x: ");
//     scanf("%d",&x);
//     printf("y: ");
//     scanf("%d",&y);

//     printf("x + y = %d",(x+y));
// // }
// #include <stdbool.h>
// int main(void)
// {
//     long dollars = 1;
//     char c ;
//     while(true)
//     {
        
//         printf("Here's a $%li , Double it and give it to the next person ? ",dollars);
//         scanf(" %c", &c);
//         if (c == 'y')
//         {
//             dollars = dollars * 2;
//         }
//         else
//             break;
//     }
// }

// int main()
// {
//     for (int i=1; i<=5; i++)
//     {
//         for (int j=1; j<=i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Tower of Hanoi 
// #include <stdio.h>
// void TOH(int n , char A, char B, char C);
// int main()
// {
//     int n;
//     printf("Enter the number of discs: ");
//     scanf("%d",&n);
//     TOH(n,'A','B','C');
//     return 0;
// }

// void TOH(int n, char X, char Y, char Z)
// {
//     if (n==0)
//         return;
//     else
//     {
//         TOH(n-1, X, Z, Y);
//         printf("move discs %d from source %c to destination %c \n", n, X, Z);
//         return TOH(n-1, Y, X, Z);
//     }
// }

#include <stdio.h>
int main()
{
    int arr1[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int arr2[3][3] = {{5,6,2},{5,2,9},{8,9,4}};
    int sum = 0;
    // for (int i=0; i<3; i++)
    // {
    //     for (int j=0;j<3; j++)
    //     {
    //         if (i == j)
    //             printf("%d\t",arr2[i][j]);
    //     }
    // }
    // for (int i=0; i<3; i++)
    // {
    //     for (int j=0; j<3; j++)
    //     {
    //         printf("%d\t",arr1[i][j] + arr2[i][j]);
    //     }
    //     printf("\n");
    // }

    // for (int i=0; i<3; i++)
    // {
    //     for (int j=0; j<3; j++)
    //     {
    //         if (i == j)
    //             sum = sum + arr1[i][j];
    //     }
    // }
    // printf("\nSum: %d",sum);

    // printf("%d",arr2[2][0]);
    printf("Multiplication of 2 Matrices: \n");
    int result[3][3] = {0};
    for (int i = 0 ; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            for (int k=0; k<3; k++)
            {
                result[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            printf("%d\t",result[i][j]);
        }
        printf("\n");
    }
}
struct student{
    name;
    rollno;
    
}