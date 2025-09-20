//Write a program that categorizes a person's age into different life stages: Child, Teenager, Adult, and Senior,
//using nested if-else statements.
#include<stdio.h>
int main(){
	int age=0;
	printf("Enter your age: ");
	scanf("%d", &age);
	if(age>=0 && age<12){
		printf("Child");
	}else if (age>=12 &&age<=19){
		printf("Teenager");
	}else if(age>=20 && age<60){
		printf("Adult");
	}else if(age>=60){
		printf("Senior");
	}else {
		printf("Enter appropriate age");
	}
	return 0;
}
