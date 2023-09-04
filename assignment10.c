# Qn1.
 float  area (float  r)
 {
      float x;
      x=3.14*r*r;
      return x;

 }
#include<stdio.h>
float  area_of_circle (float  r);
int main ()
{
    float r,y;
    printf("enter the radious");
    scanf("%f",&r);
    y=area(r);
    printf("%f",y);
    return 0;
}
#Qn2
float  simple_interest  (float  p,float r ,float t)
 {
      float x;
      x=(p*r*t)/100;
      return x;

 }
#Qn3
int  even (int  x)
 {
      if(x%2)
        return 0;
      else
        return 1;

 }
#QN4
#include<stdio.h>
void f11( int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        printf("%d\n",i);
    }
}

void f11 ( int );
int main ()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    f11(n);
    return 0;
}
#QN5
#include<stdio.h>
void f11( int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        if(i%2)
            printf("%d\n",i);
    }
}

void f11 ( int );
int main ()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    f11(n);
    return 0;
}

#QN6
#include<stdio.h>
int f6( int n)
{
    int i,fact=1;
    for(i=n;i>=1;i--)
    {
        if(i==0)
            return fact;
        else
            fact = fact*i;
    }
    return fact;
}

int f6 ( int );
int main ()
{
    int n,x;
    printf("Enter a number");
    scanf("%d",&n);
    x=f6(n);
    printf("%d\n",x);
    return 0;
}
#QN7.
#include<stdio.h>
int f7( int n)
{
    int i,fact=1;
    for(i=n;i>=1;i--)
    {
        if(i==0)
            return fact;
        else
            fact = fact*i;
    }
    return fact;
}

int f7 ( int );
int main ()
{
    int n,r,nCr;
    printf("Enter a number of n and r");
    scanf("%d %d",&n,&r);
    nCr=(f7(n))/(f7(r)*f7(n-r));
    printf("nCr is %d\n",nCr);
    return 0;
}
#QN 8.
#include<stdio.h>
int f8( int n)
{
    int i,fact=1;
    for(i=n;i>=1;i--)
    {
        if(i==0)
            return fact;
        else
            fact = fact*i;
    }
    return fact;
}

int f8 ( int );
int main ()
{
    int n,r,nPr;
    printf("Enter a number of n and r");
    scanf("%d %d",&n,&r);
    nPr=(f8(n))/(f8(n-r));
    printf("nPr is %d\n",nPr);
    return 0;
}
#QN 9.
#include<stdio.h>
int main()
{
	int n,x,rem,y;
	printf("Enter a number and digit");
	scanf("%d %d",&n,&x);
	y=n;
	while(n!=0)
	{
		rem=n%10;
		if(rem==x)
		{
			printf("%d is contain  %d",y,x);
			return 0;
		}
		n=n/10;
	}
	printf("%d is not contain %d",y,x);
	return 0;
}
#QN 10.
#include<stdio.h>
void f1(int);
int main ()
{

    int x,count=0;
    printf("Enter a number\n");
    scanf("%d",&x);
    f1(x);
    return 0;
}
void f1(int x)
{
    for (int i=2;x>=1;i++)
    {
        while(x%i==0)
            {
                printf("%d ",i);
                x=x/i;
            }
    }
}
#QN 11.
#include<stdio.h>
void f11( int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        printf("%d\n",i);
    }
}

void f11 ( int );
int main ()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    f11(n);
    return 0;
}






