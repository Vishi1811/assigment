//Qn1
#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    if(x>0)
        printf("Number is positive");
    else
        printf("Number is  non positive");
    return 0;
}
//Qn2.
#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    if(x%5==0)
        printf("Number is Divisible by 5");
    else
        printf("Number is  not Divisible by 5");
    return 0;
}
//Qn3.
#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    if((x/2)*2==x)
        printf("Number is even");
    else
        printf("Number is odd");
    return 0;
}
//Qn4.
#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    if(x%2)
        printf("Number is odd");
    else
        printf("Number is even");
    return 0;
}
//Qn5.
#include<stdio.h>
int main()
{
    int x;
    printf( "Enter a number");
    scanf("%d",&x);
    if(x>99&&x<1000)

    {
        printf( "Yes,it is three digit  number");
    }
    else
    {
        printf( "No,it is not a three digit number");
    }
    return 0;
}
//Qn6.
#include<stdio.h>
int main()
{
    int x,y;
    printf( "Enter two number");
    scanf("%d %d",&x,&y);
    if(x>y)

    {
        printf( "Greatest number is %d",x);
    }
    else
    {
        if(x==y)
        printf( "Both number are same and number is %d",x);
        else
        printf( "Greatest number is %d",y);

    }
    return 0;
}
//Qn7.
#include<stdio.h>
int main()
{
    int a,b,c,D;
    printf( "Enter value of a,b,c of quadratic");
    scanf("%d %d %d",&a,&b,&c);
    D=b*b-4*a*c;
    if(D>0)

    {
        printf("Root are real and distinct");
    }
    else
    {
        if(D==0)
        printf( "Both Rote are real and equal");
        else
        printf( "Root are imaginary");

    }
    return 0;
}
//Qn8.
#include <stdio.h>
int main() {
   int x;
   printf("Enter a year ");
   scanf("%d", &x);
   if (x%400 == 0)
    {
      printf("%d is a leap year.", x);
    }
   else if (x%100 == 0)
    {
      printf("%d is not a leap year.", x);
    }

   else if (x%4 == 0)
    {
      printf("%d is a leap year.", x);
    }
   else
    {
      printf("%d is not a leap year.",x);
    }

   return 0;
}
//Qn9.
#include <stdio.h>
int main() {
   int x,y,z;
   printf("Enter three number ");
   scanf("%d%d%d",&x,&y,&z);
   if(x>y)
   {
       (x>z)?printf("%d is greatest",x):printf("%d is greatest",z);
   }
   else if(y>z)
   {
       printf("%d is greatest",y);
   }
   else
    printf("%d is greatest",z);
   return 0;
}
//Qn10.
#include <stdio.h>
int main() {
   float x,y,z;
   float a,b;
   printf("Enter  cost prise of product ");
   scanf("%f",&x);
   printf("Enter  selling prise of product ");
   scanf("%f",&y);
   if(y>x)
   {
       z=y-x;
       a=(z/x)*100.0;
       printf("Profit percentage is %f ",a);

   }
   else
   {
       z=x-y;
       b=(z/x)*100.0;
       printf("Loss percentage is %f ",b);

   }
   return 0;
}
//Qn11.
#include<stdio.h>
int main()
{
     int S1, S2, S3, S4, S5;

     printf("Enter Marks of Five Subjects out of 100:\n");
     scanf("%d %d %d %d %d", &S1, &S2, &S3, &S4, &S5);
     if(S1>=40 && S2>=40 && S3>=40 && S4>=40 && S5>=40)
     {
          printf("\nStudent is PASS\n");
     }
     else
          printf("\nStudent is FAIL");
     return 0;
}
//Qn12.
#include <stdio.h>
int main() {
   char x;
   int y;
   printf("Enter a Alphabet ");
   scanf("%d", &x);
   y=x;
   if(y>=65&&y<=90)
   {
       printf("Alphbet is in uppercase");
   }
   else
   {
       printf("Alphbet is in lowercase");

   }
   return 0;
}
//Qn13.
#include <stdio.h>
int main() {
   int x;
   printf("Enter a Number ");
   scanf("%d", &x);
   if(x%3==0&&x%2==0)
   {
       printf("Number is Divible by 3 and 2");
   }
   else
   {
       printf("Number is not Divible by 3 and 2");
   }
   return 0;
}
//Qn14.
#include<stdio.h>
int main()
{
   int x;
   printf("Enter a Number ");
   scanf("%d", &x);
   if(x%3==0&&x%7==0)
   {
       printf("Number is Divible by 7 and 3");
   }
   else
   {
       printf("Number is not Divible by 7 and 3");
   }
   return 0;
}
//Qn15.
#include<stdio.h>
int main()
{
   int x;
   printf("Enter a Number ");
   scanf("%d", &x);
   if(x==00)
   {
       printf("Number is zero");
   }
   else if(x>0)
   {
     printf("Number is Positive");

   }
   else
        printf("Number is Nigative");

   return 0;
}
//Qn16.
#include<stdio.h>
int main()
{
    char y;
    printf("Enter a Character");
    scanf("%c",&y);
    if(y>=65&&y>=90)
        printf("Alphabet in Uppercase");
    else if(y>=97&&y<=127)
        printf("Alphabet in lowercase");
    else if(y>=48&&y<=57)
         printf("Number");
    else
        printf("Sepcial Character");
    return 0;
}
//Qn17.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter arms of trangle");
    scanf("%d%d%d",&a,&b,&c);
    if ((a + b) > c&&(a + c) >b &&(b + c)> a)
        printf("Valid");
    else
        printf("Invalid");
    return 0;
}
//Qn18.
#include<stdio.h>
int main()
{
    int x;
    printf("Enter Number of number");
    scanf("%d",&x);
    if(x==1)
        printf( "Number of days in January is 31");
    else if(x==2)
        printf( "Number of days in Febuary is 28 or 29");
    else if(x==3)
        printf( "Number of days in March is 31");
    else if(x==4)
        printf( "Number of days in April is 30");
    else if(x==5)
        printf( "Number of days in May is 31");
    else if(x==6)
        printf( "Number of days in June is 30");
     else if(x==7)
        printf( "Number of days in July is 31");
    else if(x==8)
        printf( "Number of days in August is 31");
    else if(x==9)
        printf( "Number of days in September is 30");
    else if(x==10)
        printf( "Number of days in October is 31");
    else if(x==11)
        printf( "Number of days in November is 30");
    else if(x==12)
        printf( "Number of days in December is 31");
    else
        printf("Invalid number of months");
    return 0;
}











