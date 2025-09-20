//Write a program that checks if a number is divisible by both 3 and 5 using logical operators.
#include<stdio.h>
int main(){
	int num=0;
	printf("Enter a number: ");
	scanf("%d", &num);
	if (num%3==0 && num%5== 0) {
	    printf("The number is divisible by both 3 and 5");
	}else if(num%3==0) {
	    printf("The number is divisible by 3 but not by 5");
	} else if (num%5==0) {
	    printf("The number is divisible by 5 but not by 3");
	}else{
	    printf("The number is neither divisible by 3 nor by 5");
	}
	return 0;
}
