#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char userName[50], pwd[50];

    printf("\n \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb  LOGIN FIRST \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n ");

    printf("Username:");
    scanf("%s", &userName);
    printf("\nPassword:");
    scanf("%s", &pwd);

    if (strcmp(userName, "KCCITM") == 0 && strcmp(pwd, "admin@123") == 0)
    {
        int opt;
        // clrscr();
        printf("\n1.Add Student Details\n 2.Preview student details \n 3.Grades of the students\n 4.Total Number of students\n");
        scanf("%d", &opt);
        switch (opt)
        {
        case 1:
            printf("option 1");
            break;

        case 2:
            printf("option 1");

            break;
        case 3:
            printf("option 1");

            break;
        case 4:
            printf("option 1");

            break;

        default:
            printf("Invalid option");
            break;
        }
    }
    else
    {
        printf("Invalid User id");
    }
}