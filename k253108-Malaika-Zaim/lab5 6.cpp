//Write a program using a ternary operator to find the maximum of two numbers.
#include<stdio.h>
int main(){
	int num1=0;
	int num2=0;
	int max=0;
	printf("Enter a number: ");
	scanf("%d", &num1);
	printf("Enter another number: ");
	scanf("%d", &num2);	
	(num1==num2)
	? printf("Both numbers are equal")
	: (num1>num2) 
	? printf("%d is the greater number.", num1)
	: printf("%d is the greater number.", num2);							
	return 0;
}
