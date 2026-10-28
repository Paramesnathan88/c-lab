#include<stdio.h>
int main()
{
	int a,b,choice,res;
	printf("=====BRANCHING STATEMENTS=====\n");
	print
	f("enter the first number:");
	scanf("%d",&a);
	printf("enter the second number:");
	scanf("%d",&b);
	printf("\n-----MENU-----\n");
	printf("1.Check Positive,Negative or zero\n");
	printf("2.Check Even or Odd\n");
	printf("3.Find Largest of Two Numbers\n");
	printf("4.Check Divisible\n");
	printf("\n Enter your choice:");
	scanf("%d",&choice);
	printf("\n-----RESULT-----\n");
	switch(choice)
	{
		case 1:
			if(a>0)
			printf("%d is Positive",a);
			else if(a<0)
			printf("%d is Negative",a);
			else 
			printf("%d is Zero",a);
			break;
		case 2:
			if(a%2==0)
			printf("%d is Even",a);
			else
			printf("% is Odd",a);
			break;
		case 3:
			if(a>b)
			{
				res=a;
				printf("%d is the Largest Number",res);
				
			}
			else if(b>a)
			{
				res=b;
				printf("%d is the Largest Number",res);
			}
			else
			{
				printf("Both number are Equal");
			}
			break;
		case 4:
			if(a%5==0)
			printf("%is Division by 5",a);
			else 
			printf("%d is Not Divisible by 5",a);
			break;
		default:
		    printf("Invalid choice");
	}
	return 0;
}