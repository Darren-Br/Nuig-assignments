

#include "pch.h"
#include <iostream>

#include <stdio.h>

int main()
{
	float choice;
	float width;
	float height;
	float area;
	float base1;
	float base2;
	float radius;
	float axis1;
	float axis2;
	float radianangle;
	float pi = 3.14159;

	printf("Area Calculator"
		"\nEnter Choice:"
		"\n1 <Triangle>"
		"\n2 <Square>"
		"\n3 <Rectangle>"
		"\n4 <Parallelogram>"
		"\n5 <Trapezoid>"
		"\n6 <Circle>"
		"\n7 <Ellipse>"
		"\n8 <Sector>\n");

	printf("Choice:");
	scanf_s("%f", &choice);



	if (choice == 1)
	{/*Triangle*/
		printf("Enter Base Width:");
		scanf_s("%f", &width);

		printf("Enter Vertical Height:");
		scanf_s("%f", &height);

		area = (width * .5 * height);
		printf("Area = %.2f", area);
	}



	if (choice == 2)
	{ /*Square*/
		printf("Enter Length Of Side:");
		scanf_s("%f", &width);

		area = (width * width);
		printf("Area = %.2f", area);
	}



	if (choice == 3)
	{ /*Rectangle*/
		printf("Enter Base Width:");
		scanf_s("%f", &width);

		printf("Enter Height:");
		scanf_s("%f", &height);

		area = (width * height);
		printf("Area = %.2f", area);
	}


	if (choice == 4)
	{ /*Parallelogram*/
		printf("Enter Base Width:");
		scanf_s("%f", &width);

		printf("Enter Vertical Height:");
		scanf_s("%f", &height);

		area = (width * height);
		printf("Area = %.2f", area);
	}



	if (choice == 5)
	{ /*Trapezium*/
		printf("Enter Base Width:");
		scanf_s("%f", &base1);

		printf("Enter Top Width:");
		scanf_s("%f", &base2);

		printf("Enter Vertical Height:");
		scanf_s("%f", &height);

		area = (.5 *(base1 + base2) * height);
		printf("Area = %.2f", area);
	}



	if (choice == 6)
	{ /*Circle*/
		printf("Enter Radius:");
		scanf_s("%f", &radius);

		area = ((radius * radius) * pi);
		printf("Area = %.2f", area);
	}



	if (choice == 7)
	{ /*Ellipse*/
		printf("Enter Major Radius:");
		scanf_s("%f", &axis1);

		printf("Enter Minor Radius:");
		scanf_s("%f", &axis2);

		area = (pi * axis1 * axis2);
		printf("Area = %.2f", area);
	}



	if (choice == 8)
	{ /*Sector*/
		printf("Enter Radius:");
		scanf_s("%f", &radius);

		printf("Enter Angle In Radians:");
		scanf_s("%f", &radianangle);

		area = (.5 * (radius * radius) * radianangle);
		printf("Area = %.2f", area);
	}
	


}





