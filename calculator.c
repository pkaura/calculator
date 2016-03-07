/* This file contains code for the menu based calculator */

#include<stdio.h>

int main()
{
    int choice, n1, n2, result;
    printf("\nEneter your operator choice: ");
    printf("\n\n1. Addition +"
            "\n2. Subtract -\n");
    scanf("%d",&choice);
    printf("\nEnter two numbers: ");
    scanf("%d%d",&n1,&n2);

    switch(choice)
    {
        case 1:
        {
            result = n1 + n2;
        }
        case 2:
        {
            result = n1 - n2;
        }
    }

    printf("Result = %d",result);
    return 0;
}
