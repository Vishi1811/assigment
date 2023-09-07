#QN 1
#include<stdio.h>
int f1(int a, int b);

int main()
{
    int a,b,x;
    printf("Enter two number : ");
    scanf("%d %d",&a,&b);
    x=f1(a,b);
    printf(" LCM is: %d",x);
    return 0;

}
int f1(int a, int b)
{
    int l;
    for(l=(a>b?a:b);l<=a*b;l=l+(a>b?a:b))
    {
        if(l%a==0 && l%b==0)
            break;
    }
    return l;
}
#QN 2.
#include<stdio.h>
int f1(int a, int b);

int main()
{
    int a,b,x;
    printf("Enter two number : ");
    scanf("%d %d",&a,&b);
    x=f1(a,b);
    printf(" HCF is: %d",x);
    return 0;

}
int f1(int a, int b)
{
    int l;
    for(l=(a<b?a:b);l>=1;l--)
    {
        if(a%l==0 && b%l==0)
            break;
    }
    return l;
}



#QN 3
#include<stdio.h>
int f3(int a);

int main()
{
    int a,x;
    printf("Enter a number : ");
    scanf("%d",&a);
    x=f3(a);
    if(x==1)
        printf("%d  is a prime number ",a);
    else
        printf("%d  is not  a prime number ",a);
    return 0;

}
int f3(int a)
{
    int i;
    for(i=2;i<=a/2;i++)
    {
        if(a%i==0)
            return 0;
        else
            return 1;
    }

}
#QN 4.
