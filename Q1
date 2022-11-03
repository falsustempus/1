#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*Programmer : s11159019    Program:TAXI FARE CALCULATOR      
                              DATE:2022/9/26             */
 

#define fare_per_mile 1.50 //fare is $1.50 per mile.


int main()
{
	//declare the beginnging odomerter , ending odometer ,traveled distance ,and the total fare
	double beginning_odometer, ending_odometer,traveled_distance, total_fare; 


	printf("TAXI FARE CALCULATOR\n");
	//get the odometer reading of beginng and ending
	printf("Enter beginning odometer reading=>");
	scanf("%f", &beginning_odometer);
	printf("Enter ending odometer reading=>");
	scanf("%f",  &ending_odometer);

	//calculate the traveled distance and the total fare
	traveled_distance = ending_odometer - beginning_odometer;
	total_fare = fare_per_mile * traveled_distance;
	printf("You traveled  a distance of %lf miles",traveled_distance);
	printf("At $%f per mile,\nyour fare is $%f.", fare_per_mile,total_fare);

	return (0);
}
