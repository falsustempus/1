#define _CRT_SECURE_NO_WARNINGS

/*
Programmer: s11159019
Program: payment calculator
Date: 2022/10/16
*/
#include <stdio.h>
#include <math.h>

int main() 
{
	/*
	payment= i*P/1-(1+i)^(-n)

	P = principal
	i = monthly interest rate
	n = total number of payments
	*/

	//declare each variable
	double purchase_price     ; // P
	double down_payment       ;
	double annual_rate        ;	// annual rate /12 = monthly rate
	int    number_of_payments ; // n

	double monthly_rate       ;	// i
	double payment            ; //monthly payment

	//ask the user to enter purchase price, down payment, annual interest rate , and thge total numbers of payments
	printf("Enter the purchase price >");
	scanf("%lf", &purchase_price);

	printf("Enter the down payment >");
	scanf("%lf", &down_payment);

	printf("Enter the annual interest rate >");
	scanf("%lf", & annual_rate);

	printf("Enter the total numbers of the payments >");
	scanf("%d", &number_of_payments);

	//annual rate should be devide by 12 to become monthly reate
	monthly_rate = annual_rate / (100 * 12);

	//principal = purchase price - down payment
	//use pow() to repersent ^(-n) in the formula
	payment = ((monthly_rate * (purchase_price-down_payment)) / (1 - (pow(1 + monthly_rate, (-1) * number_of_payments))));

	//output the borrowed amount, and the payment that calculated
	printf("\n\nThe amount borrowed : $%.2f", purchase_price - down_payment);
	printf("\nThe payment: $%.2f", payment);
	return 0;
}