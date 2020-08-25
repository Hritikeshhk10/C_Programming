#include<stdio.h>
#include<stdlib.h>
main()
{
	void option();
	void input();
	for(;;){
	option();
	input();
	}
}

void option()
{
	printf("\n\n-----------Main Menu----------");
	printf("\nPress \"1\" -> Arithematic Operation . ");
	printf("\nPress \"2\" -> Check Whether a given number is prime or not .");
	printf("\nPress \"3\" -> Sum of n Elements in the Array.");
	printf("\nPress \"4\" -> Check number of vowels in your name . ");
	printf("\nPress \"5\" -> Add two numbers using Pointer. ");
	printf("\nPress \"6\" -> To Terminate the program .");
	printf("\n-----------------------------------------------");	
}

void input()
{	int choice;
	printf("\nEnter your Choice : ");	
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			for(;;){
			options();
			int n;
			printf("\nEnter your choice : ");
			scanf("%d",&n);
			if(n==6){printf("\nWe are moving to Main Menu.\n");break;}
			else	arithematic(n);
			}
			break;
		case 2:
			printf("Enter a number : ");
			int n1;
			scanf("%d",&n1);
			isPrime(n1);
			break;
		case 3:
			printf("Enter a number : ");
			int num;
			scanf("%d",&num);
			SumOfArray(num);
			break;
		case 4:
			VowStr();
			break;
		case 5:
			AddPointer();
			break;
		case 6:
			printf("\nThank you for visiting , I hope you Enjoyed C programming .\n");
			exit(0);
		default:
			printf("Invalid Choice Entered !!.\n To continue Run the program Again .");			
	}
}

options()
{
	printf("\n\n----------Sub Menu---------");
	printf("\nPress \"1\" -> Addition.");
	printf("\nPress \"2\" -> Subtraction .");
	printf("\nPress \"3\" -> Division .");
	printf("\nPress \"4\" -> Multiplication .");
	printf("\nPress \"5\" -> Modulo .");
	printf("\nPress \"6\" -> To move to Main menu .");
	printf("\n-----------------------------------------------");	
}

arithematic(int n)
{
	switch(n)
	{
		case 1:
			add();
			break;
		case 2:
			subtract();
			break;
		case 3:
			divide();
			break;
		case 4:
			multiply();
			break;
		case 5:
			modulo();
			break;
		case 6:
			break;
		default:
			printf("Invalid Choice Entered!! ");
	}
}

add()
{
	int num1 , num2;
	printf("Enter two numbers : ");
	scanf("%d%d",&num1,&num2);
	printf("Addition of %d and %d = %d",num1,num2,(num1+num2));
}

subtract()
{
	int num1 , num2;
	printf("Enter two numbers : ");
	scanf("%d%d",&num1,&num2);
	printf("Subtraction of %d and %d = %d",num1,num2,(num1-num2));
}

divide()
{
	int num1 , num2;
	printf("Enter two numbers : ");
	scanf("%d%d",&num1,&num2);
	printf("Division of %d and %d = %d",num1,num2,(num1/num2));
}

multiply()
{
	int num1 , num2;
	printf("Enter two numbers : ");
	scanf("%d%d",&num1,&num2);
	printf("Multiplication of %d and %d = %d",num1,num2,(num1*num2));
}

modulo()
{
	int num1 , num2;
	printf("Enter two numbers : ");
	scanf("%d%d",&num1,&num2);
	printf("Remainder of %d and %d = %d",num1,num2,(num1%num2));
}

isPrime(int num)
{
	int i, c=0;
	for(i=2;i<=num/2;i++)
		if(num%i==0)
			c++;
	if(num==1)	printf("%d is neither a Prime nor Composite Number .",num);
	if(num<1)		printf("Entered number is Zero or a Negative Number .\n So try again");
	if(c==0)	printf("%d is a Prime Number .",num);
	else	printf("%d is not a Prime Number .",num);
}

SumOfArray(int n)
{
	int i, arr[n], sum=0;
	for(i=0;i<n;i++)
	{
		printf("Element at position[%d] : ",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		sum+=arr[i];
	}
	printf("Sum of Elements in Array = %d",sum);
}

VowStr()
{
	char name[100];
	int i,cv=0; // cv is count vowels .
	printf("Enter your name (without any space) : ");
	scanf("%s",&name);
	for(i=0;name[i]!='\0';i++)
		if(name[i]=='a' || name[i]=='e' || name[i]=='i' || name[i]=='o' || name[i]=='u' || name[i]=='A' || name[i]=='E' || name[i]=='I' || name[i]=='O' || name[i]=='U')
			cv++;
	printf("%s contains %d Vowels .",name,cv);
}

AddPointer()
{
	int num1, num2, *fptr, *sptr; // where fptr is first pointer and sptr is second pointer .
	printf("Enter first number : ");
	scanf("%d",&num1);
	printf("Enter second number : ");
	scanf("%d",&num2);
	
	fptr = &num1;
	sptr = &num2;
	printf("Sum of two pointer variables = %d",(*fptr + *sptr));
}

