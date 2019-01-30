
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void getName(char emp[]);
int getID(char emp[]);
double getHours(char emp[]);

char firstName[40];
char surname[40];
int ID;
double hours[5];

void main()
{
	char emp1[] = "Smith,Fred,2214,,5,7,8.5,10.0";
	char emp2[] = "Murphy,Sarah,1579,8.5,5,5,8,8";


	getName(emp1);
	getID(emp1);
	getHours(emp1);
	printf("Employee %s %s, ID: %d, worked the following hours:\n", firstName, surname, ID);
	printf("Monday:%.2lf Tuesday:%.2lf Wednesday:%.2lf Thursday:%.2lf Friday:%.2lf \n", hours[0], hours[1], hours[2], hours[3], hours[4]);

	puts("");

	getName(emp2);
	getID(emp2);
	getHours(emp2);
	printf("Employee %s %s, ID: %d, worked the following hours:\n", firstName, surname, ID);
	printf("Monday:%.2lf Tuesday:%.2lf Wednesday:%.2lf Thursday:%.2lf Friday:%.2lf \n", hours[0], hours[1], hours[2], hours[3], hours[4]);



}


void getName(char emp[])
{
	int j = 0;
	int i;
	int counter = 0;


	for (i = 0; i < strlen(emp); i++) {
		if (emp[i] == ',') {
			counter++;
		}

		if (counter == 0) {
			surname[i] = emp[i];
		}

		if (counter == 1 && emp[i] != ',') {
			firstName[j] = emp[i];
			j++;
		}
	}
}

int getID(char emp[])
{
	char temp[4] = "";
	int j = 0;
	int i;
	int counter = 0;

	for (i = 0; i <strlen(emp); i++) {
		if (emp[i] == ',') {
			counter++;
		}
		if (counter == 2 && emp[i] != ',') {
			temp[j] = emp[i];
			j++;
		}
	}
	ID = atoi(temp);

	return ID;
}

double getHours(char emp[])
{

	int j = 0;
	int i;
	int counter = 0;

	for (i = 0; i <strlen(emp); i++) {

		if (emp[i] == ',') {
			counter++;
		}

		if (counter == 3 && emp[i] != ',') {
			//Monday
			char temp[4] = "";
			temp[j] = emp[i];
			hours[0] = atoi(temp);
		}

		if (counter == 4 && emp[i] != ',') {
			//Tuesday
			char temp[4] = "";
			temp[j] = emp[i];
			hours[1] = atoi(temp);
		}

		if (counter == 5 && emp[i] != ',') {
			//Wednesday
			char temp[4] = "";
			temp[j] = emp[i];
			hours[2] = atoi(temp);
		}

		if (counter == 6 && emp[i] != ',') {
			//Thursday
			char temp[4] = "";
			temp[j] = emp[i];
			hours[3] = atoi(temp);
		}

		if (counter == 7 && emp[i] != ',') {
			//Friday
			char temp[4] = "";
			temp[j] = emp[i];
			hours[4] = atoi(temp);
		}
	}


	return 0;
}



