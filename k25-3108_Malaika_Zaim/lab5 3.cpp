//3. Write a program that checks if a year is a leap year using the modulus operator.
#include<stdio.h>
int main(){
	int year=0;
	printf("Enter the current year(e.g. 2023, 1970 etc): ");
	scanf("%d", &year);
	if(year>0 && year<10000000){
		if(year%400==0){
			printf("It's a Leap Year!");
		}else if(year%4==0 && year%100!=0){
			printf("It's a Leap Year!");
		}else{
			printf("It's not a Leap Year!");
		}
		}else {
			printf("Please enter a valid year!");
		}
	return 0;
}

