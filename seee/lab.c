// Fibonacci series using recursion 
#include <stdio.h>
// int fib(int n)
// {
//     if (n==1)
//     {
//         return 0;
//     }
//     else if (n == 2)
//     {
//         return 1;
//     }
//     else 
//         return fib(n-1) + fib (n-2);
// }

// int main()
// {
//     int n;
//     printf("Enter no of terms: ");
//     scanf("%d",&n);
//     printf("Fibonacci Series: ");
//     for (int i = 1; i<=n ; i++)
//         printf("%d\t",fib(i));
//     return 0;
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
//     int arr[100], n, i, min, max;
//     printf("Enter size: ");
//     scanf("%d",&n);
//     printf("Enter elements: \n");
//     for (i=0; i<n; i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     min = max = arr[0];
//     for (i=1; i<n; i++)
//     {
//         if (arr[i] < min)
//             min = arr[i];
//         if (arr[i] > max)
//             max = arr[i];
//     }
    
//     printf("Minimum = %d\nMaximum = %d",min , max);
//     return 0;
// }


#include <stdio.h>

// int main() {
//     int arr[100], n, i, target, index = -1;

//     // Input size of array
//     printf("Enter size: ");
//     scanf("%d", &n);

//     // Input array elements
//     printf("Enter elements:\n", n);
//     for(i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

    // Input element to search
//     printf("Enter element to search: ");
//     scanf("%d", &target);

//     // Linear search
//     for(i = 0; i < n; i++) {
//         if(arr[i] == target) {
//             index = i;
//             printf("Target found at position %d\n", i+1);
//             break;
//         }
//     }

//     // If element not found
//     if(target == -1) {
//         printf("Element not found\n");
//     }

//     return 0;
// }


// int main()
// {
//     int arr[100] , n, i;
//     printf("Enter size: ");
//     scanf("%d",&n);
//     printf("Enter elements: \n");
//     for (i=0; i<n; i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     printf("Reversed Array: \n");
//     for (i=n-1; i>=0; i--)
//     {
//         printf("%d\t",arr[i]);
//     }
//     return 0;
// }


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

// int main()
// {
//     int m, n,sum=0;
//     printf("Enter order of matrix A: ");
//     scanf("%d %d",&m, &n);
//     int A[m][n];
//     // printf("Enter order of matrix B: ");
//     // scanf("%d %d",&p,&q);
//     // int A[m][n] , B[p][q] , sum[m][q];
//     printf("Enter elements of A: ");
//     for (int i=0;i<m;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             printf("A[%d][%d]: ",i,j);
//             scanf("%d",&A[i][j]);
//         }
//     }
//     for (int i=0;i<m;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             if (i==j)
//             {
//                 sum += A[i][j];
//             }
//         }
//     }
//     printf("Trace of Matrix A is: %d",sum);
// }

//     printf("Enter elements of B: ");
//     for (int i=0;i<p;i++)
//     {
//         for(int j=0;j<q;j++)
//         {
//             printf("B[%d][%d]: ",i,j);
//             scanf("%d",&A[i][j]);
//         }
//     }

//     if (m==p && n==q){
//         printf("Additon Matrix: ");
//         for(int i=0;i<m;i++)
//         {
//             for (int j=0;j<q;j++)
//             {
//                 printf("sum[%d][%d]:  ",sum[i][j]);
//                 printf("%d\t", A[i][j] + B[i][j]);
//             }
//         }
//     }
//     else
//         printf("Order is not equal");
//     }

// };

// #include <stdio.h>

// struct student {
//     int roll_no;
//     char name[50];
//     char batch[10];   // changed from int to char array
//     char branch[10];
//     char grade[5];
// };

// int main() {
//     struct student s;
//     printf("Enter Roll no: ");  scanf("%d", &s.roll_no);
//     printf("Enter Name: ");     scanf("%s", s.name);
//     printf("Enter Batch: ");    scanf("%s", s.batch);    // now %s
//     printf("Enter Branch: ");   scanf("%s", s.branch);
//     printf("Enter Grade: ");    scanf("%s", s.grade);
//     printf("The student details are:\n");
//     printf("Roll no: %d\n", s.roll_no);
//     printf("Name: %s\n", s.name);
//     printf("Batch: %s\n", s.batch);   // now %s
//     printf("Branch: %s\n", s.branch);
//     printf("Grade: %s\n", s.grade);
//     return 0;
// }
// #include <stdio.h>
// #include <stdlib.h>

// struct student {
//     int roll;
// };

// int main() {
//     struct student *ptr;
//     ptr = (struct student *) malloc(sizeof(struct student));
//     ptr->roll = 10;
//     printf("Before free: %d\n", ptr->roll);
//     free(ptr);
//     printf("Memory freed successfully");
//     return 0;
// }

//Linked Lists

#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};

struct Node* insertatbeginning(struct Node* head, int value){
    struct Node* newNode = (struct Node*)malloc;(sizeof(struct Node));
    newNode->data = value;
    newNode->next = head;
    return newNode;
}

void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;
    head = insertatbeginning(head, 5);
    head = insertatbeginning(head, 10);
    head = insertatbeginning(head, 15);
 
    printList(head);
}