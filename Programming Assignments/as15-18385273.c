#include <stdio.h>
#include "string.h"
#include "stdlib.h"

typedef struct
{
    int day, month, year;
} date;

typedef struct
{
    char firstName[50];
    char lastName[50];
    char email[50];
    date dob;
} person;

char months[12][12] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
int numContacts = 0;
person people[10];

int readFile(char *fileName);
date getDate(char *dateString);
int getAge(date dob);
char *getMonth(int month);
void printPerson(person p1);

int  main()
{
    char fileName[] = "people.txt";
    int i=0;
    
    if (!readFile(fileName))
    {
        printf( "File could not be opened !!\n" );
        return 0;
    }
    
    
}

void printPerson(person p1)
{
    printf(" First Name: %s \n Last Name: %s \n e-mail: %s \n DOB: %s %d, %d \n Age: %d\n \n", p1.firstName, p1.lastName, p1.email, getMonth(p1.dob.month), p1.dob.day, p1.dob.year, getAge(p1.dob));
}


int readFile(char *fileName)
{
    char line[400];
    FILE *fptr = fopen(fileName, "r");
    char *token;
    char delim[6]=",";
    int n=0,i=0;
    person p1;
    date d1;
    
    if (fptr == NULL)
    {
        printf("Error opening file ! \n");
        return 0;
    }
    
    // use fgets to skip first line
    fgets (line, 400, fptr);
    
    //first data line
    fgets (line,400,fptr);
    while (!feof(fptr))
    {
       
        if ((token = strtok(line, delim)) != NULL) strcpy(p1.firstName, token);
        if ((token = strtok(NULL, delim)) != NULL) strcpy(p1.lastName, token);
        if ((token = strtok(NULL, delim)) != NULL) strcpy(p1.email, token);
        if ((token = strtok(NULL, delim)) != NULL) d1 = getDate(token);
        
        p1.dob = d1;
      
        printPerson(p1);
        people[n] = p1;
        n++;
        //next data line
        fgets (line,200,fptr);
        
    }
    numContacts = n;
    
    fclose (fptr);
    
    return 1;
}

date getDate(char *dateString)
{
    date d1;
    char delim[2] = "/";
    char *token;
    int day, month, year;
    
    if ((token = strtok(dateString, delim)) != NULL) day = atoi(token);
    if ((token = strtok(NULL, delim)) != NULL) month = atoi(token);
    if ((token = strtok(NULL, delim)) != NULL) year = atoi(token);
    d1.day = day;
    d1.month = month;
    d1.year = year;
    
    token = strtok(dateString, delim);
    
    while (token != NULL)
    {
        token = strtok(NULL, delim);
    }
    return d1;
}


int getAge(date dob)
{
    int age;
    
    age = 2019 - dob.year;
    
    return age;
    
}

char *getMonth(int month)
{
    return months[month-1];
    
}
