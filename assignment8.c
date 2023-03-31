//Qn1.
#include<stdio.h>
int main()
{
    int i,j;
    for (i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
           printf("*");
        }
        printf("\n");

    }
    return 0;
}
//Qn2.
#include<stdio.h>
int main()
{
    int i,j;
    for (i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j>=6-i)
            {
               printf("*");
            }
            else
            {
               printf(" ");
            }
        }
        printf(" \n");

    }
    return 0;
}
//Qn3.
#include<stdio.h>
int main()
{
    int i,j;
    for (i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=6-i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");

    }
    return 0;
}
//Qn4.
#include<stdio.h>
int main()
{
    int i,j;
    for (i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<i)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");

    }
    return 0;
}
//Qn6.
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(j>=i&&j<=10-i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
//Qn5.
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(j>=6-i&&j<5+i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
//Qn7.
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=10;j++)
        {
            if(j>=7-i&&j<=4+i)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
    return 0;
}
//Qn8.
#include<stdio.h>
int main()
{
    int i,j;
   for(i=1;i<=4;i++)
    {
        for(j=1;j<=4-i;j++)
        {
            printf(" ");
        }

        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }

        for(j=i-1;j>=1;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }

    return 0;
}
//Qn9.
#include<stdio.h>
int main()
{
    int i,j;
   for(i=1;i<=4;i++)
    {
        for(j=1;j<=i-1;j++)
        {
            printf(" ");
        }

        for(j=1;j<=5-i;j++)
        {
            printf("%d",j);
        }

        for(j=4-i;j>=1;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }

    return 0;
}
//Qn10.
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4;j++)
        {
            if(j<=5-i)
            {
                printf("%d",j);
            }
            else
            {
                 printf(" ");
            }
        }
        for(j=3;j>=1;j--)
        {
            if(j<=5-i)
            {
                printf("%d",j);
            }
            else
            {
                 printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}



  




