//Write a program that checks if a user can withdraw money from an ATM. Set a maximum withdrawal limit
//(e.g., $500). If the amount requested is less than or equal to the limit and is a multiple of $20, print
//"Withdrawal approved." Otherwise, print "Withdrawal denied."
#include<stdio.h>
int main(){
	int withdrawal_amount=0;
	int max_limit=500;
	printf("How much do you want to withdraw: ");
	scanf("%d", &withdrawal_amount);
	if(withdrawal_amount<=max_limit){
		if(withdrawal_amount%20==0){
			printf("Withdrawal Approved!");
		}else{
		printf("Withdrawal Denied!");
		}
	}else{
		printf("Withdrawal Denied!");
	}
	return 0;
}
