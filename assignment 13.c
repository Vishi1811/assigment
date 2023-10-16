# QN1.
#include<stdio.h>
int sum(int );
void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Sum of first %d natural number is %d ",n,sum(n));
}
int sum(int n)
{
    int s;
    if(n==1)
        return 1;
    s=n+sum(n-1);
    return s;

}

#QN2.
//Write a program in C to calculate the power of any number using recursion.
#include<stdio.h>

int power(int,int);
int main() {
    int a, b, x;
    printf("Enter base number: ");
    scanf("%d", &a);
    printf("Enter power number(positive integer): ");
    scanf("%d", &b);
    x = power(a, b);
    printf("%d^%d = %d", a, b, x);
    return 0;
}

int power(int a, int b) {
    if (b != 0)
        return (a * power(a, b - 1));
    else
        return 1;
}

#QN3.
#include<stdio.h>
int evensum(int );
void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Sum of first %d odd natural number is %d ",n,evensum(n));
}
int evensum(int n)
{
    int s;
    if(n==1)
        return 2;
    s=(2*n)+evensum(n-1);
    return s;

}

#QN4.
#include<stdio.h>
int squaresum(int );
void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Sum of square first %d natural number is %d ",n,squaresum(n));
}
int squaresum(int n)
{
    int s;
    if(n==1)
        return 1;
    s=(n*n)+squaresum(n-1);
    return s;

}
#QN5.
//Write a program in C to calculate the power of any number using recursion.
#include<stdio.h>

int power(int,int);
int main() {
    int a, b, x;
    printf("Enter base number: ");
    scanf("%d", &a);
    printf("Enter power number(positive integer): ");
    scanf("%d", &b);
    x = power(a, b);
    printf("%d^%d = %d", a, b, x);
    return 0;
}

int power(int a, int b) {
    if (b != 0)
        return (a * power(a, b - 1));
    else
        return 1;
}

#QN6.
#include<stdio.h>
int fact(int );
void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("factorial of %d is %d ",n,fact(n));
}
int fact(int n)
{
    int s;
    if(n==1)
        return 1;
    s=n*fact(n-1);
    return s;

}
#QN7.
//Write a program in C to count the digits of a given number using recursion.
#include<stdio.h>
int dig(int);
int main()
{
    int n,x;
    printf("Enter the number: ");
    scanf("%d",&n);
    x=dig(n);
    printf("number of digit is %d",x);
    return 0;
}
int dig(int n)

{
   static int count=0;

  if(n==0)
    return count;
  dig(n/10);
  count++;

}


#QN8.
//Write a recursive function to print first N terms of Fibonacci series
#include<stdio.h>
int feb(int );
int main()
{
    int n,i;
    printf("Ente a number:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        printf("%d ",feb(i));
    return 0;
}
int feb(int n)
{
    if(n==0||n==1)
       return n;
    return feb(n-1)+feb(n-2);
}

#QN9.
//Write a program in C to count the digits of a given number using recursion.
#include<stdio.h>
int dig(int);
int main()
{
    int n,x;
    printf("Enter the number: ");
    scanf("%d",&n);
    x=dig(n);
    printf("number of digit is %d",x);
    return 0;
}
int dig(int n)

{
   static int count=0;//in a reccurtion fuction call itself many time but if we make a static variable so this line will be run only one time no matter how many time fuction call itself ,only one ti e count will get the memory

  if(n==0)
    return count;
  dig(n/10);
  count++;

}
#QN10.
//Write a program in C to calculate the power of any number using recursion.
#include<stdio.h>

int power(int,int);
int main() {
    int a, b, x;
    printf("Enter base number: ");
    scanf("%d", &a);
    printf("Enter power number(positive integer): ");
    scanf("%d", &b);
    x = power(a, b);
    printf("%d^%d = %d", a, b, x);
    return 0;
}

int power(int a, int b) {
    if (b != 0)
        return (a * power(a, b - 1));
    else
        return 1;
}


