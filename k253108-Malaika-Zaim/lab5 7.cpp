////7. Write a program that asks for a movie rating (1 to 5) for movie “The Lion King” from user and provides
//feedback based on the rating:
//• 5: Excellent
//• 4: Good
//• 3: Average
//• 2: Poor
//• 1: Terrible
#include<stdio.h>
int main(){
	int rating=0;
	printf("Did you like 'The Lion King'? Rate it 1 - 5: ");
	scanf("%d", &rating);
	switch(rating){
		case 5:
			printf("The movie was Excellent!");
			break;
		case 4:
			printf("The movie was Good!");
			break;
		case 3:
			printf("The movie was Average!");
			break;
		case 2:
			printf("The movie was Poor!");
			break;
		case 1:
			printf("The movie was Terrible!");
			break;
		default:
			printf("No comments");
			break;
	}
	return 0;
}
