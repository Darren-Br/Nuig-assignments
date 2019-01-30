#include "stdafx.h"
#include "stdio.h"

int main()
{
	int i;
	double max = 0, min = 0, average = 0, total = 0;
	double numbers[11];

	puts("Program to calculate average, min and max of up to 10 floating points");
	puts("Enter up to 10 numbers <0.0 to end input>");
	puts("__________________");
	
	for (i = 0; i < 10; i++)
	{
		printf("#%d:\t", i + 1);
		scanf("%lf", &numbers[i]);

		total += numbers[i];
		
		if (numbers[0] == 0.0)
		{
			puts("No numbers entered");
			return(0);
		}
		 
		if (numbers[i] == 0.0)
		{
			break;
		}
		
		if (i == 1)
		{
			max = numbers[i];
			min = numbers[i];
		}

		if (numbers[i] > max)
		{
			max = numbers[i];
		}

		if (numbers[i] < min)
		{
			min = numbers[i];
		}
	}
	average = total / i;
	printf("Average = %.2lf, Max = %.2lf, Min = %.2lf \n", average, max, min);
	

}

