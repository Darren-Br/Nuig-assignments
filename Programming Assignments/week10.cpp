#include "stdafx.h"
#include "string.h"
#include "stdlib.h"
#include "time.h"

struct date
{
	int day, month, year;
};

struct customer
{
	char name[50];
	int accountNumber;
	double balance;
	struct date lastTrans;
};

int getDay(int month, int year);
int getMonth();
int getYear();
double getBalance();

void printCustomers(struct customer customers[], int nCustomers);
void populateCustomers(struct customer customers[], int nCustomers);
int transaction(struct customer customers[], int accountNumber, double amount, int nCustomers);

int main()
{
	int i;
	srand(time(0));
	struct customer customers[10];

	populateCustomers(customers, 10);

	printf("%25s\t%13s\t%12s\t%s\n\n", "Name", "Account Number", "Balance", "Date of Last Transaction");

	printCustomers(customers, 10);

	printf("\n\n");

	if (!(transaction(customers, 10001, -967.89, 10)))
	{
		printf("account number %d not found - transaction cancelled", 10001);
	}
	else
	{
		printf("account number %d - transaction processed", 10001);
	}
	printf("\n\n");

	if (!(transaction(customers, 33, -967.89, 10)))
	{
		printf("account number %d not found - transaction cancelled", 33);
	}
	else
	{
		printf("account number %d  - transaction processed", 33);
	}
	printf("\n\n");

	printf("%25s\t%13s\t%12s\t%s\n\n", "Name", "Account Number", "Balance", "Date of Last Transaction");

	printCustomers(customers, 10);

	printf("\n\n");

	return 0;
}

int getDay(int month, int year)
{
	int day;
	if (year == 2016 && month == 2) {
		day = 1 + (rand() % 29);
	}
	if (month == 2) {
		day = 1 + (rand() % 28);
	}
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12 ) {
		day = 1 + (rand() % 31);
	}
	else {
		day = 1 + (rand() % 30);
	}
	
	return day;
}

int getMonth()
{
	int month;
	month = 1 + (rand() % 12);
	return month;
}

int getYear()
{
	int year;
	year = 2013 + (rand() % 4);
	return year;
}

double getBalance()
{
		int n;
		double balance;
		balance = (rand() % 5000);
		n = (rand() % 2);
		if (n == 1) {
			balance = balance;
		}
		else
		{
			balance = balance * -1;
		}
		return balance;
}

void printCustomers(struct customer customers[], int nCustomers)
{
	int i;
	for (i = 0; i < nCustomers; i++) {
	printf("%25s\t%13d\t%12.2lf\t%d/%d/%d\n", customers[i].name, customers[i].accountNumber, customers[i].balance, customers[i].lastTrans.day, customers[i].lastTrans.month, customers[i].lastTrans.year);
	}
	return;
}

void populateCustomers(struct customer customers[], int nCustomers)
{
	int i;
	char names[10][50] = {"Haiden Soto","Oscar Hernandez","Heath Hickman","Reagan Mcknight","Noah Bartlett","Ross Day","Maribel Livingston","Jewel Phillips","Blake Gardner","Fernanda Ponce" };

	for (i = 0; i<nCustomers; i++)
	{
		strcpy(customers[i].name, names[i]);
		customers[i].accountNumber = 10000 + i;

		customers[i].balance = getBalance();
		customers[i].lastTrans.day = getDay(getMonth(), getYear());
		customers[i].lastTrans.month = getMonth();
		customers[i].lastTrans.year = getYear();

	}

	return;

}

int transaction(struct customer customers[], int accountNumber, double amount, int nCustomers)
{
	int i;

	for (i = 0; i < nCustomers; i++) {
		if (customers[i].accountNumber == accountNumber) {
			customers[i].balance += amount;
			return 1;
	}
	}

	return 0;
}