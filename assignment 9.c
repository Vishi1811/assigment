#Qn1.
#include<stdio.h>
int main()
{
    int x;
    printf("Enter month number");
    scanf("%d",&x);
    switch(x)
    {
    case 1:
        printf("Number of days in January is 31");
        break;
    case 2:
        printf("Number of days in February is 28 or 29");
        break;
    case 3:
        printf("Number of days in March is 31");
        break;
    case 4:
        printf("Numberof days in April is 30");
        break;
    case 5:
        printf("Number of days in May is 31");
        break;
    case 6:

        printf("Number of days in June is 30");
        break;
    case 7:
        printf("Number of days in July is 31");
        break;
    case 8:
        printf("Number of days in August is 31");
        break;
    case 9:
        printf("Number of days in September is 30");
        break;
    case 10:
        printf("Number of days in October is 31");
        break;
    case 11:
        printf("Number of days in November is 30");
        break;
    case 12:
        printf("Number of days in December is 31");
        break;
    default:
        printf("Wrong number have been entered");

    }
    return 0;


}
#QN.2
#include <stdio.h>
int main() {
    char operation;
    int n1, n2;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operation);
    printf("Enter two operands: ");
    scanf("%d %d",&n1, &n2);

    switch(operation)
    {
        case '+':
            printf("%d + %d = %d",n1, n2, n1+n2);
            break;

        case '-':
            printf("%d - %d = %d",n1, n2, n1-n2);
            break;

        case '*':
            printf("%d * %d = %d",n1, n2, n1*n2);
            break;

        case '/':
            printf("%d / %d = %d",n1, n2, n1/n2);
            break;

        default:
            printf("Error! operator is not correct");
    }

    return 0;
}
#QN3.
/*3. Write a program which takes the day number of a week and displays a
unique greeting message for the day.*/
#include<stdio.h>
int main()
{
    int x;
    printf("Enter a even number  ");
    scanf("%d", &x);
    switch (x%2)
    {
    case 0:
        x=x-1;
        printf("%d",x);
        break;


    default :
        printf("Invalid,entered no. is not even");
        break;
    }
    return 0;
}

#Qn4.
#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number  ");
    scanf("%d", &x);
    switch (x>0)
    {
    case 1:
        x=(-x);
        printf("%d",x);
        break;
    case 0:
        x=-(x);
        printf("%d",x);
        break;

    default :
    printf("Invalid");
        break;
    }
    return 0;
}
#QN 5.
#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number  ");
    scanf("%d", &x);
    switch (x>0)
    {
    case 1:
        x=(-x);
        printf("%d",x);
        break;
    case 0:
        x=-(x);
        printf("%d",x);
        break;

    default :
    printf("Invalid");
        break;
    }
    return 0;
}
#QN 6.
#include<stdio.h>
int main()
{
   int year, x;

   printf("Enter Year: ");
   scanf("%d",&year);

   x=((year%4==0)&&((year%400==0)||(year%100!=0)));

   switch(x)
   {

   case 0:
     printf(" Not a Leap Year");
     break;

   case 1:
     printf("Leap Year");
     break;

   default:
     printf("Invalid");
     break;

   }

   return 0;
}
#QN7.
#include<stdio.h>
int main()
{
	int unit;
	float amount,total_amount,s_charge;
	printf("enter the number of units you consumed\n");
	scanf("%d",&unit);
	switch(unit<=50)
	{
		case 1:
			amount=unit*0.50;
			break;
			case 0:
                switch(unit<=150)
				{
					case 1:
						amount=25+(unit-50)*0.75;
						break;
						case 0:
                             switch(unit<=250)
							{
								case 1:
								amount=100+(unit-150)*1.20	;
								break;
								case 0:
								amount=220+(unit-250)*1.50;
								break;
							}
						break;
				}
			break;
	}
	s_charge=amount*0.20;
	total_amount=amount+s_charge;
	printf("your total bill is Rs %f ",total_amount);
}
#Qn8.
#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number  ");
    scanf("%d", &x);
    switch (x>0)
    {
    case 1:
        x=(-x);
        printf("%d",x);
        break;
    case 0:
        x=-(x);
        printf("%d",x);
        break;

    default :
    printf("Invalid");
        break;
    }
    return 0;
}
#QN9.
#include<stdio.h>
int main()
{
    int x;
    printf("Enter a even number  ");
    scanf("%d", &x);
    switch (x%2)
    {
    case 0:
        x=x-1;
        printf("%d",x);
        break;


    default :
        printf("Invalid,entered no. is not even");
        break;
    }
    return 0;
}

#QN10.
#include <stdio.h>
#include <math.h> 

int main()
{
    float a, b, c;
    float root1, root2, imaginary;
    float discriminant;

    printf("Enter values of a, b, c of quadratic equation (aX^2 + bX + c): ");
    scanf("%f%f%f", &a, &b, &c);
   
    discriminant = (b * b) - (4 * a * c);

    switch(discriminant > 0)
    {
        case 1:
          
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);

            printf("Two distinct and real roots exists: %.2f and %.2f",
                    root1, root2);
            break;

        case 0:
          
            switch(discriminant < 0)
            {
                case 1:
                    root1 = root2 = -b / (2 * a);
                    imaginary = sqrt(-discriminant) / (2 * a);

                    printf("Two distinct complex roots exists: %.2f + i%.2f and %.2f - i%.2f",
                            root1, imaginary, root2, imaginary);
                    break;

                case 0:
                    root1 = root2 = -b / (2 * a);

                    printf("Two equal and real roots exists: %.2f and %.2f", root1, root2);

                    break;
            }
    }

    return 0;
}
