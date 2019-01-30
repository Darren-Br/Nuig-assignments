#include "stdafx.h"

#include "stdio.h"

void main()
{
	int engMark = 0;
	int freMark = 0;
	int mathMark = 0;
	int irMark = 0;
	int sciMark = 0;
	float avg = 0;
	int largest = 0;

	printf("Enter English Mark: ");
	scanf_s("%d", &engMark);

	printf("Enter French Mark: ");
	scanf_s("%d", &freMark);

	printf("Enter Math Mark: ");
	scanf_s("%d", &mathMark);

	printf("Enter Irish Mark: ");
	scanf_s("%d", &irMark);

	printf("Enter Science Mark: ");
	scanf_s("%d", &sciMark);


	avg = (engMark + freMark + mathMark + irMark + sciMark) / 5.0;

	printf("\nAverage Mark = %.2f \n", avg);

	printf("Passes: ");

	if (engMark >= 40.0)
	{
		printf("English, ");
	}


	if (freMark >= 40.0)
	{
		printf("French, ");
	}


	if (mathMark >= 40.0)
	{
		printf("Math, ");
	}


	if (irMark >= 40.0)
	{
		printf("Irish, ");
	}


	if (sciMark >= 40.0)
	{
		printf("Science, ");
	}





	printf("\nFails: ");
	if (engMark <= 40.0)
	{
		printf("English, ");
	}


	if (freMark <= 40.0)
	{
		printf("French, ");
	}


	if (mathMark <= 40.0)
	{
		printf("Math, ");
	}


	if (irMark <= 40.0)
	{
		printf("Irish, ");
	}


	if (sciMark <= 40.0)
	{
		printf("Science, ");
	}



	printf("\nHighest Mark = ");

	if (engMark > largest)
	{
		largest = engMark;
	}

	if (freMark > largest)
	{
		largest = freMark;
	}

	if (mathMark > largest)
	{
		largest = mathMark;
	}

	if (irMark > largest)
	{
		largest = irMark;
	}

	if (sciMark > largest)
	{
		largest = sciMark;
	}

	printf("%d \n", largest);



}

