#include<stdio.h>
// #define Area(x,y) (x*y)
// int main(){
//     int a = 3;
//     int b = 4;
//     // printf("Left shift a by 3: %d",(3<<5));
//     // printf("Right shift a by 3: %d",(64>>3));
//     printf("Bitwise AND: %d\n",a&b);
//     printf("Bitwise OR: %d\n",a|b);
//     printf("Bitwise XOR: %d\n",a^b);
//     printf("Bitwise NOT of a: %d\n",~a);
//     printf("Bitwise NOT of b: %d",~b);
// }

// int main(){
//     int num;
//     printf("Enter number: ");
//     scanf("%d",&num);
//     // if (num%5 == 0 && num%7==0)
//     //     printf("Divisible by 5 and 7");
//     // else 
//     // printf("Not divisible by 5 and 7");

//     // if (num%3 ==0 || num%9 == 0)
//     //     printf("Divisible by either 3 or 9");
//     // else 
//     //     printf("Not divisible by 3 or 9");

//     if (!(num%2 == 0)){
//         printf("Number is odd");
//         }
// }

// int main(){
//     int a,b;
//     printf("Enter two numbers: ");
//     scanf("%d %d",&a,&b);
//     printf("a==b: %d\n",a==b);
//     printf("a!=b: %d\n",a!=b);
//     printf("a>b: %d\n",a>b);
//     printf("a<b: %d\n",a<b);
//     printf("a<=b: %d\n",a<=b);
//     printf("a>=b: %d\n",a>=b);
// }

// int main(){
//     int a = 5;
//     printf("Pre increment: %d\n",++a);
//     a = 5;
//     printf("Post increment: %d\n",a++);
//     a = 5;
//     printf("Pre decrement: %d\n",--a);
//     a = 5;
//     printf("Post decrement: %d\n",a--);

// }

// int main(){
//     int a,b,c;
//     printf("Enter three numbers: ");
//     scanf("%d %d %d",&a,&b,&c);
    
//     if(a>b)
//         {if(a>c)
//             printf("a is greatest");
//         else
//             printf("c is greatest");}
//     else
//         {if(b>c)
//             printf("b is greatest");
//         else
//             printf("c is greatest");}
// }
// #include<stdio.h>
// int main(){
//     int a,b,c;
//     printf("Enter three numbers: ");
//     scanf("%d %d %d",&a,&b,&c);
//     if (a>b && a>c) {
//         if (b>c)
//             printf("b is second greatest");
//         else
//             printf("c is second greatest");
//     }
//     else if (b>a && b>c)
//     {
//         if (a>c)
//             printf("a is second greatest");
//         else
//             printf("c is second greatest");
//     } 
//     else
//         {
//             if (a>b)
//                 printf("a is second greatest");
//             else
//                 printf("b is second greatest");
//         }
// }
// #include<math.h>
// int main(){
//     float a,b,c;
//     printf("Enter three numbers: ");
//     scanf("%f %f %f",&a,&b,&c);
//     float D = b*b - 4*a*c;
//     float r1 = (-b + sqrt(D))/2*a;
//     float r2 = (-b - sqrt(D))/2*a;
//     if (D>=0){
//         printf("Roots are: %.2f,%.2f",r1,r2);
//     }
//     else
//         printf("Roots are complex");
// }

// int main(){
//     int n;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     int temp = n;
//     int rev_num = 0;
//     while (n!=0){
//         int last_digit = n%10;
//         rev_num = rev_num*10 + last_digit;
//         n = n/10;
//     }
//     if (rev_num == temp){
//         printf("Palindrome");
//     }
//     else
//         printf("Not Palindrome");
// }
// #include<math.h>
// int main(){
//     int n,digits = 0;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     int temp = n;
//     int arm_num = 0;
//     while(n!=0){
//         n = n/10;
//         digits ++;
//     }
//     n = temp;
//     while(n!=0){
//         int last_digit = n%10;
//         arm_num = arm_num + pow(last_digit , digits);
//         n = n/10;
//     }

//     if (arm_num == temp)
//         printf("Armstrong Number");
//     else
//         printf("Not armstrong number");
// }

// int main(){
//     int n;
//     printf("Enter number of terms: ");
//     scanf("%d",&n);
//     int x = 0 , y = 1 , fib_sum = 0 , i=3;
//     printf("%d\t%d\t",x,y);
//     while (i<=n){
//         fib_sum = x + y ;
//         printf("%d\t",fib_sum);
//         x = y ;
//         y = fib_sum;
//         i++;
//     }
// }

// int main()
// {
//     int n;
//     printf("Enter number: ");
//     scanf("%d",&n);
//     int flag = 1;
//     for (int i = 2; i<=n; i++){
//         if (n%i == 0)
//             flag = 0;
//             break;
//     }
//     if (flag == 0)
//         printf("Not prime");
//     else 
//         printf("Prime");
// }

// int main(){
//     int n;
//     printf("enter number: ");
//     scanf("%d",&n);
//     for (int i = n-1; i>0; i--){
//         n = n*i;
//     }
//     printf("Factorial: %d",n);
// }

// int main(){
//     int n = 1;
//     for (int i=0; i<5; i++){
//         for (int j=5; j<i; j++){
//             printf("%d\t",n);
//             n+=1;
//         }
//         printf("\n");
//     }
// }

// int fib(int n){
//     if (n==1)
//         return 0;
//     else if (n==2)
//         return 1;
//     else
//         return fib(n-1) + fib(n-2);
// }
// int main(){
//     int n,i;
//     printf("Enter number of terms: ");
//     scanf("%d",&n);
//     printf("Fibonacci Series: \n");
//     for (i=1; i<=n; i++){
//         printf("%d\t",fib(i));
//     }
//     return 0;
// }

// void isPrime(int num){
//     int flag = 1;
//     for (int i=2; i<num; i++){
//         if(num%i == 0){
//             flag=0;
//             break;
//         }
//     }
//     if (flag == 0)
//         printf("Not Prime");
//     else
//         printf("Prime");
// }

// int main(){
//     int n;
//     printf("Enter number: ");
//     scanf("%d",&n);
//     isPrime(n);
// }

// #include <stdio.h>

// void reverseArray(int arr[], int size) {
//     int temp;
//     for (int i = 0; i < size / 2; i++) {
//         int first = arr[i];
//         int second = arr[size-i-1];
//         arr[i] = second ;
//         arr[size-i-1] = first;
//     }
// }
// int main() {
//     int arr[] = {10, 20, 30, 40, 50};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     reverseArray(arr, size);
//     printf("Reversed array: ");
//     for (int i = 0; i < size; i++) {
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }
// void rev(int arr[],int size){
//     for (int i=0; i<size/2; i++){
//         int first = arr[i];
//         int second = arr[size-i-1];
//         arr[i] = second;
//         arr[size-i-1] = first;
//     }
// }
// int main(){
//     int arr[] = {1,2,3,4,5};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     rev(arr,size);
//     for (int i=0;i<size;i++){
//         printf("%d\t",arr[i]);
//     }
// }

// void TOH(int n,char A, char B, char C){
//     if (n==0)
//         return ;
//     else{
//         TOH(n-1,A,C,B);
//         printf("Move disk %d from %c to %c\n",n,A,C);
//         return TOH(n-1,B,A,C);
//     }
// }

// int main(){
//     int n;
//     printf("Enter number of disk: ");
//     scanf("%d",&n);
//     TOH(n,'A','B', 'C');

// }

// int largest(int arr[],int n){
//     int max = arr[0];
//     for (int i=1; i<n; i++){
//         if ((arr[i]) > max)
//             max = arr[i];
//     }
//     return max;
// }

// int main(){
//     int arr[] = {1,2,3,4,5,10,82,2,34};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int result = largest(arr,n);
//     printf("Largest: %d",result);
// }

// void swap(int a , int b){
//     int temp = a;
//     a = b;
//     b = temp; 
// }
// int main(){
//     int x = 10 , y = 20;
//     swap(x,y);
//     printf("%d %d",x,y);
// }

// void swap(int *a, int *b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
// int main(){
//     int x = 10 , y = 20;
//     swap(&x,&y);
//     printf("%d %d",x,y);
// }

// int main(){
//     int arr[] = {1,2,3,4,5};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int *ptr = arr;
//     int sum = 0;
//     for(ptr = arr; ptr<(arr+n);ptr++){
//         printf("%d\t",*ptr);
//         sum = sum + *ptr;
//     }
//     printf("sum=%d",sum);
// }

// int main(){
//     int x = 10;
//     int *ptr = &x;
//     int **dptr = &ptr;
//     printf("%d %d %d", x,*ptr,**dptr);
// }

// #include <stdio.h>

// struct student {
//     int roll_no, batch;
//     char name[50], branch[20];
// };

// // Function prototypes
// void input(struct student *s);
// void display(struct student s);

// void input(struct student *s) {
//     printf("Enter Roll no: ");  scanf("%d", &s->roll_no);
//     printf("Enter Name: ");     scanf("%s", s->name);
//     printf("Enter Batch: ");    scanf("%d", &s->batch);
//     printf("Enter Branch: ");   scanf("%s", s->branch);
// }

// void display(struct student s) {  // passed by VALUE (entire struct copy)
//     printf("The Student Details are:\n");
//     printf("Roll No: %d\n", s.roll_no);   // use dot (.) not arrow (->)
//     printf("Name: %s\n",    s.name);
//     printf("Batch: %d\n",   s.batch);
//     printf("Branch: %s\n",  s.branch);
// }

// int main() {
//     struct student s;
//     input(&s);      // pass address for input (to modify original)
//     display(s);     // pass entire struct by value (just for display)
//     return 0;
// }

// #include<stdio.h>
// union Data {
//     int i;
//     float f;
//     char ch;
// };
// int main(){
//     union Data d;
//     printf("Size of union: %lu bytes\n", sizeof(d));
//     d.i = 10;
//     printf("i = %d\n", d.i);
//     d.f = 3.14;
//     printf("f = %.2f\n", d.f);   // d.i is now corrupted
//     return 0;
// }

struct student{
    char name[50];
    int roll;
};
int main(){
    struct student s1 = {"rajiv",32};
    struct student *ptr = &s1;

    printf("Name: %s\nRoll: %d",ptr->name,ptr->roll);
}
