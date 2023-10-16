#Qn1.
#include<stdio.h>
void printN(int );
void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printN(n);
}
void printN(int n)
{
    if(n>0)
    {
        printN(n-1);
        printf("%d ",n);

    }

}
#Qn2.
#include<stdio.h>
void reverse(int );
void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    reverse(n);
}
void reverse(int n)
{
    if(n>0)
    {
        printf("%d ",n);
        reverse (n-1);

    }
}
#QN3.
#include<stdio.h>
void odd(int );
void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    odd(n);
}
void odd(int n)
{
    if(n>0)
    {
        odd(n-1);
        printf("%d ",2*n-1);

    }
}
#QN4.
#include<stdio.h>
void odd(int );
void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    odd(n);
}
void odd(int n)
{
    if(n>0)
    {

        printf("%d ",2*n-1);
        odd(n-1);

    }
}
#QN5.
#include<stdio.h>
void even(int );
void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    even(n);
}
void even(int n)
{
    if(n>0)
    {
        even(n-1);
        printf("%d ",2*n);

    }
}
#Qn6.
#include<stdio.h>
void even(int );
void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    even(n);
}
void even(int n)
{
    if(n>0)
    {
        printf("%d ",2*n);
        even(n-1);

    }
}
#QN7.
#include<stdio.h>
void even(int );
void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    even(n);
}
void even(int n)
{
    if(n>0)
    {
        even(n-1);
        printf("%d ",n*n);

    }
}
#Qn8.
//Write a recursive function to print binary of a given decimal number
#include<stdio.h>
void dtob(int);
int main()
{
    int x;
    printf("Enter a decimal number: ");
    scanf("%d",&x);
    dtob(x);
    return 0;
}
void dtob (int x)
{
    if(x>0)
    {
        dtob(x/2);
        printf("%d",x%2);
    }

}
#QN9.
#include<stdio.h>
void reverse(int );
void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    reverse(n);
}
void reverse(int n)
{
    if(n>0)
    {
        printf("%d",n%10);
        reverse(n/10);

    }
}
#QN10.
#include<stdio.h>
void reverse(int );
void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    reverse(n);
}
void reverse(int n)
{
    if(n>0)
    {
        printf("%d",n%10);
        reverse(n/10);

    }
}

