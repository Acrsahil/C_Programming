#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Employee
{
    char name[50];
    char position[50];
} emp;

void addRecordToFile()
{
    emp emp1;
    int size;
    printf("How many employees do you want to enter into the file: ");
    if (scanf("%d", &size) != 1)
    {
        printf("Invalid input\n");
        return;
    }
    printf("\n");

    FILE *file = fopen("file_handle.csv", "a");
    if (file == NULL)
    {
        printf("Error opening file\n");
        return;
    }

    // add the heading if the file is empty
    if (ftell(file) == 0)
    {
        fprintf(file, "Name,Position\n");
    }

    for (int i = 0; i < size; i++)
    {
        printf("Enter the employee %d Name: ", i + 1);
        if (scanf("%49s", emp1.name) != 1)
        {
            printf("Invalid input\n");
            fclose(file);
            return;
        }
        printf("Enter the employee %d Position: ", i + 1);
        if (scanf("%49s", emp1.position) != 1)
        {
            printf("Invalid input\n");
            fclose(file);
            return;
        }
        fprintf(file, "%s,%s\n", emp1.name, emp1.position);
        printf("\n");
    }
    fclose(file);
}

void displayRecordFromFile()
{
    printf("Name,Position\n");           // Add this line
    printf("-----------------------\n"); // Add this line
    printf("You can display record here\n");
    FILE *file;
    file = fopen("file_handle.csv", "r");
    if (file == NULL)
    {
        printf("Error!");
        exit(1);
    }
    emp emp2;
    while (fscanf(file, "%49[^,],%49s\n", emp2.name, emp2.position) == 2)
    {
        printf("%s\t%s\n", emp2.name, emp2.position);
    }
    fclose(file);
}

void searchRecordInFile()
{
    emp emp2;
    printf("You can search record here\n");
    FILE *file;
    file = fopen("file_handle.csv", "r");
    if (file == NULL)
    {
        printf("Error!");
        exit(1);
    }
    char searchText[50];
    printf("Enter Search Text: ");
    scanf("%s", searchText);
    int found = 0;
    while (fscanf(file, "%49[^,],%49s\n", emp2.name, emp2.position) == 2)
    {
        if (strcmp(emp2.name, searchText) == 0 || strcmp(emp2.position, searchText) == 0)
        {
            printf("Record found\n");
            printf("Name: %s\n", emp2.name);
            printf("Position: %s\n", emp2.position);
            found = 1;
        }
    }
    if (!found)
    {
        printf("Record Not found\n");
    }
    fclose(file);
}

int main()
{
    int c;
    printf("======= Welcome to Lincoln University Employee Management ========\n");
    printf("************************************************************\n");
    printf("Press 1 for Add new record to file\n");
    printf("Press 2 for Display record of file\n");
    printf("Press 3 for Search in file\n");
    printf("Press 4 for Exit\n");
    printf("************************************************************\n");
    printf("Enter your Choice\n");
    scanf("%d", &c);
    while (1)
    {
        switch (c)
        {
        case 1:
            addRecordToFile();
            break;
        case 2:
            displayRecordFromFile();
            break;
        case 3:
            searchRecordInFile();
            break;
        case 4:
            printf("Exiting...\n");
            exit(0);
        default:
            printf("Invalid Choice\n");
            break;
        }
    
        return 0;
    }
}
