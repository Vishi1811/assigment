//Qn1.
#include<stdio.h>
int main()
{
    int x,i,sum=0;
    printf("Enter a number");
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        sum=sum+i;
    }

     printf(" Sum of First %d natural number is %d ",x,sum);
    return 0;
}
//Qn2.
#include<stdio.h>
int main()
{
    int x,i,sum=0;
    printf("Enter a number");
    scanf("%d",&x);
    for(i=1;i<=2*x;i++)
    {

        if(i%2==0)
           sum=sum+i;
    }
    printf(" Sum of First %d even natural number is %d",x,sum);

    return 0;
}
//Qn3.
#include<stdio.h>
int main()
{
    int x,i,sum=0;
    printf("Enter a number");
    scanf("%d",&x);
    for(i=1;i<=2*x;i++)
    {

        if(i%2)
           sum=sum+i;
    }
    printf(" Sum of First %d odd natural number is %d",x,sum);

    return 0;
}
//Qn4.
#include<stdio.h>
int main()
{
    int x,i,sum=0;
    printf("Enter a number");
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        sum =sum+i*i;
    }
    printf(" Sum of Square of First %d natural number is %d",x,sum);
    return 0;
}
//Qn5.
#include<stdio.h>
int main()
{
    int x,i,sum=0;
    printf("Enter a number");
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        sum =sum+i*i*i;
    }
    printf(" Sum of Cube of First %d natural number is %d",x,sum);
    return 0;
}
//Qn6.
#include<stdio.h>
int main()
{
    int x,i,fact=1;
    printf("Enter a number");
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        fact =fact*i;
    }
    printf(" Factorial  of  %d  is %d",x,fact);
    return 0;
}
//Qn7.
#include<stdio.h>
int main()
{
    int x,i,count=0;
    printf("Enter a number");
    scanf("%d",&x);
    for(i=x;i>0;i=i/10)
    {

        count++;
    }
    printf(" number of digit  is %d",count);
    return 0;
}
//Qn8.
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {

        if(n%i==0)
        {
            printf("Not a Prime Number");
            break;
        }
    }
    if(i==n)
    {
        printf("Prime Number");

    }
    return 0;
}
//Qn9.
#include<stdio.h>
int main()
{
    int a,b,l;
    printf("Enter two number");
    scanf("%d%d",&a,&b);
    for(l=(a>b?a:b);l<=a*b;l=l+(a>b?a:b))
    {
        if(l%a==0&&l%b==0)
        {
            printf("LCM of %d and %d is %d",a,b,l);
            break;
        }
    }
    return 0;
}
//Qn10.
#include<stdio.h>
int main()
{
  int x,i,rev=0,rem;
  printf("Enter a number");
  scanf("%d",&x);
  for(i=x;i>0;i=i/10)
  {
      rem=i%10;
      rev=rev*10+rem;
  }
  printf("%d",rev);
  return 0;
}
