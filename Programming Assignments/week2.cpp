#include "stdio.h"

void main()
{
	int hoursWorked = 0;
	float basicRate = 13;
	float pay = 0.00;
	float overTimeRate = 15;

	printf("Enter Hours Worked: ");
	scanf_s("%d", &hoursWorked);

	if (hoursWorked <= 40)
	{
		pay = hoursWorked*basicRate;
			
	}
	

	else 
	{
		pay = 40 * basicRate + (hoursWorked - 40)*overTimeRate;
			
	}
	printf("You worked %d hours", hoursWorked);
	printf(", and Earned  %.2f \n", pay);

}