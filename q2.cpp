#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int main() {
	double weight;
	double height;
	double BMI;


	printf("Enter the weight in pounds: ");
	scanf("%lf", &weight);

	printf("Enter the height in inches: ");
	scanf("%lf", &height);

	BMI=703*weight/(height*height);

	printf("\NYour BMI is %.1f \nYou're ",BMI);

	if(BMI <= 18.5 ){
		printf("Underweight");
	}
	else{
		if(BMI <= 24.9 ){
			printf("Normal");
		}
		else {
			if (BMI <= 29.9) {
				printf("Overweight");
			}
			else { //BMI >=30.0
				printf("Obese");
			}
		}
	}

	return 0 ; 
}