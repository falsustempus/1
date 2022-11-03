#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
/*Programmer: s11159019            Program: Temperature in freezer since a power failure  	
					               DATE: 2022/9/26   */

//T for Temperature , t for the elapsed time 

// the formula: T=(4t^2)/(t+2)-20

  int main()
{	
	int hour ;
	double  minutes, converted_hour, Temperature;
	
	//asking the user to enter the time that elapsed
	printf("Enter the elapsed time (hours minutes)=>");
	scanf("%d %lf",&hour,&minutes);

	//convert the time in hour
	converted_hour= hour + (minutes/60);

	//calculate the Temperature by the formula
	Temperature=((4*converted_hour* converted_hour)/(converted_hour+2))-20;
	printf("The temperature since a power failure is %lf ℃",Temperature);

	return(0);

}
