#include<stdio.h>
#include<conio.h>
int main()
{
    char strOrig[100], strCopy[100], i;
    printf("Enter any string: ");
    gets(strOrig);
    for(i=0; strOrig[i]!='\0'; i++)
        strCopy[i] = strOrig[i];
    strCopy[i] = '\0';
    printf("\nString 1 = %s", strOrig);
    printf("\nString 2 = %s", strCopy);
    getch();
    return 0;
}
