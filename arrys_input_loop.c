#include <stdio.h>

int main()
{
    int marks[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value of marks Student %d\n",i+1);
        scanf("%d", &marks[i]);
    }

    for (int j = 0; j < 5; j++)
    {
        printf(" the value of marks for  Student %d is %d\n",j+1,marks[j]);
    }
    return 0;
}