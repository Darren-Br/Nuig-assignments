#include<stdio.h>

FILE *fptr;

void readData();
void openFile();
char userInput[10];

void main()
{
    /* First iteration of Program */
    openFile();
    printf("Enter product Name <or return to quit>: ");
    gets(userInput);
    int input = strlen(userInput);
    if (input == 0)
    {
        puts("End of Processing!");
        return;
    }
    else
    {
        readData();
    }
    
    while (input != 0) /* To Loop the Program */
    {
        openFile();
        printf("Enter Product Name <or return to quit>: ");
        gets(userInput);
        int input = strlen(userInput);
        if (input == 0)
        {
            puts("End of Processing!");
            return;
        }
        else
        {
        readData();
        }
    }
    fclose(fptr);
}

void readData() {
    char skipline[51], OrderDate[11], Region[8], Rep[11], Item[11], Units[4];
    float UnitCost = 0, Total = 0, FinalTotal = 0;
    
    fgets(skipline, 50, fptr); /*this skips the first line*/
    while (!feof(fptr)) {
        fscanf(fptr, "%s\t%s\t%s\t%s\t%s\t%f\t%f", OrderDate, Region, Rep, Item, Units, &UnitCost, &Total);
        
        if (!strcmp(Item, userInput)) {
            FinalTotal = FinalTotal + Total;
        }
    }
    printf("Total Sales for %s = %.2f\n", userInput, FinalTotal);
}

void openFile() {
    fptr = fopen("SampleData.txt", "r"); /* Done on a mac so does not have it in a "C:\\" type format" */
    if (fptr == NULL) 
    {
        printf("Error opening file! \n");
    }
}
