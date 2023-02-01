//Qn1.
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a number ");
    scanf("%d",&x);
    y=x%10;
    printf("Last digit of %d is %d",x,y);
    return 0;
}
//Qn2.
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a number ");
    scanf("%d",&x);
    y=x/10;
    printf("Number without last digit of %d is %d",x,y);
    return 0;
}
//Qn3.
#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter two number ");
    scanf("%d %d",&x,&y);
    z=y;
    y=x;
    x=z;
    printf("After swapping the Number x=%d and y=%d",x,y);
    return 0;
}
//Qn4.
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter two number ");
    scanf("%d %d",&x,&y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("After swapping the Number x=%d and y=%d",x,y);
    return 0;
}
//Qn5.
#include<stdio.h>
int main()
{
    int x,y,z,sum;
    printf("Enter three digit number");
    scanf("%d",&x);
    y=x%10;
    x=x/10;
    z=x%10;
    x=x/10;
    sum=x+z+y;
    printf("sum of digit is %d",sum);
    return 0;
}
//Qn7.
#include<stdio.h>
int main()
{
   char x;
   printf("Enter a Character");
   scanf("%c",&x);
   printf("ASCII code of %c is %d",x,x);
   return 0;
}
//Qn9.
#include<stdio.h>
int main()
{
    printf(" size of int is %d\n",sizeof(int));
    printf("size of char is %d\n",sizeof(char));
    printf("size of float is %d\n",sizeof(float));
    printf("size of double is %d\n",sizeof(double));
    return 0;
}
//Qn10.
#include<stdio.h>
int main ()
{
    int x;
    printf("Enter a number");
    scanf("%d ",&x);
    x=x/10;
    x=x*10;
    printf("New number is %d",x);
    return 0;
}
//Qn11.
#include<stdio.h>
int main ()
{
    int x,y;
    printf("Enter a number");
    scanf("%d",&x);
    printf("Enter a digit");
    scanf("%d",&y);
    x=x*10+y;
    printf("After appending the digit the new number is %d",x);
    return 0;
}
//Qn12.
#include<stdio.h>
int main ()
{
    float x;
    printf("Enter ammount in INR");
    scanf("%f",&x);
    x=x/76.23;
    printf("ammount in USD is %f",x);
    return 0;
}
//Qn13.
#include<stdio.h>
int main ()
{
    int x,y,z;
    printf("Enter a three digit number");
    scanf("%d",&x);
    y=x%100;
    x=x/100;
    z=10*y+x;
    printf("New number is %d",z);
    return 0;
}










  
  
