#include "math.h"
#include "stdio.h"

int stringLen(char *str);
int stringToInt(char *str);
char * intToString(int val, char *str);

void main()
{
    int iVal;
    char str[100];
    char string[] = "-12340987";
    
    iVal = stringToInt(string);
    
    printf ("string: %s in integer form is %d \n\n", string, stringToInt(string));
    
    iVal = -469033;
    
    printf ("integer: %d in string form is %s \n\n", iVal, intToString(iVal, str));
}



int stringToInt(char *str)
{
    int result = 0;
    int len = stringLen(str);
    int num, i, sign = 1;
   
    if (*str == '-'){ //checks the sign
        sign = -1;
    }
    for (i = 0; i<len; i++){
        char c = *(str + i);
        if ((c <= 57) && (c>= 48)){
            num = c - 48;
            result = result + (int)num * pow (10.0, len - i - 1);
        }
    }
    result = result * sign;
    return result;
}

int stringLen(char *str)
{
    int i = 0;
    while (str[i] != '\0'){
        i++;
    }
    return i;
}

char * intToString(int val, char * str)
{
    snprintf(str, sizeof(str), "%d", val);
    return str;
}
