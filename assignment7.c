//Qn1.
#include<stdio.h>
int main()
{
int n, t1 = 0, t2 = 1, nextTerm = 0, i;
printf("Enter the n value: ");
scanf("%d", &n);
if(n == 0 || n == 1)
printf("%d", n);
else
nextTerm = t1 + t2;
for (i = 3; i <= n; ++i)
{
t1 = t2;
t2 = nextTerm;
nextTerm = t1 + t2;
}
printf("%d", t2);
return 0;
}
//Qn2.
#include<stdio.h>
int main()
{
    int a=-1,b=1,n,c;
    printf("Enter a number");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d\n",c);
    }
    return 0;
}
//Qn3.
#include<stdio.h>
int main()
{
    int n,a=-1,b=1,i;
    long int c;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=1;i>0;i++)
    {
        c=a+b;
        a=b;
        b=c;
        if(n==c)
        {
            printf("Number is in febonacci series");
            break;
        }
        if(c>n)
            {
               printf("Number is  not in febonacci series");
               break;
            }
    }
    return 0;
}
//Qn4.
#include<stdio.h>
int main()
{
    int a,b,h;
    printf("Enter two number");
    scanf("%d%d",&a,&b);
    for(h=(a<b?a:b);h>=1;h--)
    {
        if(a%h==0&&b%h==0)
        {
            printf("HCF of %d and %d is %d",a,b,h);
            break;
        }
    }
    return 0;
}
//Qn5.
#include<stdio.h>
int main()
{
    int a,b,h;
    printf("Enter two number");
    scanf("%d%d",&a,&b);
    for(h=(a<b?a:b);h>=1;h--)
    {
        if(a%h==0&&b%h==0)
        {
            break;
        }
    }
    if(h==1)
        {
            printf(" %d and %d are co prime number",a,b);
        }
    else
        {
            printf(" %d and %d are not co prime number",a,b);
        }
    return 0;
}
//Qn6.
#include<stdio.h>
int main()
{
    int i,j;
    for(i=2;i<=100;i++)
    {
      for(j=2;j<i;j++)
        {
            if(i%j==0)
              break;
        }
        if(j==i)
        {
            printf("%d\n",i);
        }
    }
}
//Qn7.
#include<stdio.h>
int main()
{
    int i,j,a,b;
    printf("Enter upper and lower limit");
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
      for(j=2;j<i;j++)
        {
            if(i%j==0)
              break;
        }
        if(j==i)
        {
            printf("%d\n",i);
        }
    }
}
//Qn8.
#include<stdio.h>
int main()
{
    int x,i,j;
    printf("Enter a number");
    scanf("%d",&x);
    for(i=x+1;i>0;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
                break;
        }
        if(j==i)
        {
            printf("Next prime number is %d",i);
             break;
        }
    }
    return 0;
}
//Qn9.
#include <math.h>
#include <stdio.h>

int main() {
   int num, originalNum, remainder, n = 0;
   float result = 0.0;

   printf("Enter an integer: ");
   scanf("%d", &num);

   originalNum = num;

   for (originalNum = num; originalNum != 0; ++n) {
       originalNum /= 10;
   }

   for (originalNum = num; originalNum != 0; originalNum /= 10) {
       remainder = originalNum % 10;
      result += pow(remainder, n);
   }
   if ((int)result == num)
    printf("%d is an Armstrong number.", num);
   else
    printf("%d is not an Armstrong number.", num);
   return 0;
}
//Qn10.
#include <math.h>
#include <stdio.h>

int main()
{
    int i, sum, num, count = 0;
    for (i = 1; i <= 1000; i++) {
        num = i;
        while (num != 0) {
            num /= 10;
            count++;
        }
        num = i;
        sum = pow(num % 10, count)
              + pow((num % 100 - num % 10) / 10, count)
              + pow((num % 1000 - num % 100) / 100, count);
        if (sum == i) {
            printf("%d ", i);
        }
        count = 0;
    }
}



