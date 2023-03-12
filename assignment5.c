//Qn1.
#include<stdio.h>
int main()
{
    int x,i;
    printf("Enter a number as many time as you want 'MySirG' to be printed");
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        printf("MySirG\n");
    }
    return 0;
}
//Qn2.
 #include<stdio.h>
int main()
{
    int x,i;
    printf("Enter a number");
    scanf("%d",&x);
    printf("First %d natural number is\n",x);
    for(i=1;i<=x;i++)
    {
        printf("%d\n",i);
    }
    return 0;
}
//Qn3.
 #include<stdio.h>
int main()
{
    int x,i;
    printf("Enter a number");
    scanf("%d",&x);
    printf("First %d natural number  in reverse order is\n",x);
    for(i=x;i>=1;i--)
    {
        printf("%d\n",i);
    }
    return 0;
}
//Qn4.
#include<stdio.h>
int main()
{
    int x,i;
    printf("Enter a number");
    scanf("%d",&x);
    printf("First %d odd natural number is\n",x);
    for(i=1;i<=2*x;i++)
    {

        if(i%2)
           printf("%d\n",i);
    }
    return 0;
}
//Qn5.
#include<stdio.h>
int main()
{
    int x,i;
    printf("Enter a number");
    scanf("%d",&x);
    printf("First %d odd natural number in reverse order is\n",x);
    for(i=2*x;i>=1;i--)
    {

        if(i%2)
           printf("%d\n",i);
    }
    return 0;
}
//Qn6.
#include<stdio.h>
int main()
{
    int x,i;
    printf("Enter a number");
    scanf("%d",&x);
    printf("First %d even natural number is\n",x);
    for(i=1;i<=2*x;i++)
    {

        if(i%2==0)
           printf("%d\n",i);
    }
    return 0;
}
//Qn7.
#include<stdio.h>
int main()
{
    int x,i;
    printf("Enter a number");
    scanf("%d",&x);
    printf("First %d even natural number in reverse order is\n",x);
    for(i=2*x;i>=1;i--)
    {

        if(i%2==0)
           printf("%d\n",i);
    }
    return 0;
}
//Qn8.
#include<stdio.h>
int main()
{
    int x,i;
    printf("Enter a number");
    scanf("%d",&x);
    printf(" Square of First %d natural number is\n",x);
    for(i=1;i<=x;i++)
    {
        printf("%d\n",i*i);
    }
    return 0;
}
//Qn9.
#include<stdio.h>
int main()
{
    int x,i;
    printf("Enter a number");
    scanf("%d",&x);
    printf(" Cube of First %d natural number is\n",x);
    for(i=1;i<=x;i++)
    {
        printf("%d\n",i*i*i);
    }
    return 0;
}
//Qn10.
#include<stdio.h>
int main()
{
    int x,i;
    printf("Enter a number");
    scanf("%d",&x);
    printf("Table of  %d is\n",x);
    for(i=1;i<=10;i++)
    {
        printf("%d\n",x*i);
    }
    return 0;
}












 
 
