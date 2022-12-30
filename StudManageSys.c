#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void exit();

int main()
{
    // ======Declaring Variable for username and password (GLOBAL VARIABLE)=======
    char userName[50], pwd[50];

    // =======(\xdb) is used to display better UI=======
    printf("\n \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb  LOGIN FIRST \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n ");

    printf("Username:");
    scanf("%s", &userName);

    printf("\nPassword:");
    scanf("%s", &pwd);

    // =====(strcmp) is used to compare string =====

    if (strcmp(userName, "KCCITM") == 0 && strcmp(pwd, "admin@123") == 0)
    {
        // For option to return to main menu
        int opt;

        int choice;
        // clrscr();  ====to clear the screen (only works in turbo C)====

        do
        {
            printf("\n1.Add Student Details\n 2.Preview student details \n 3.Grades of the students\n 4.Total Number of students\n");

            scanf("%d", &opt);

            // =====Mani Menu in switch case=====

            switch (opt)
            {

                // ========= Declaring var fot students details =========
                char sName[100], regNo[100], doB[100], fName[100], mName[100], add[100], crsEnrol[100], dofEnrol[100];

            case 1: // ===== To Add student detail =====

                printf("\t\t---------------|Add Student Details|---------------\t\t\n");

                printf("Name of the student:");
                scanf("%s", &sName);

                printf("\nRegistration number:");
                scanf("%s", &regNo);

                printf("\nDate of Birth:");
                scanf("%s", &doB);

                printf("\nFather's name:");
                scanf("%s", &fName);

                printf("\nMother's name:");
                scanf("%s", &mName);

                printf("\nAddress:");
                scanf("%s", &add);

                printf("\nCourse enrolled:");
                scanf("%s", &crsEnrol);

                printf("\nDate of enrollment:");
                scanf("%s", &dofEnrol);

                // ===== Preview students details =====

                printf("\n\n\xdb Details preview \xdb\n");

                printf("\nName of the student:%s\n", sName);
                printf("\nRegistration number:%s\n", regNo);
                printf("\nDate of birth:%s\n", doB);
                printf("\nFather's name:%s\n", fName);
                printf("\nMother's name:%s\n", mName);
                printf("\nAddress:%s\n", add);
                printf("\nCourse enrolled:%s\n", crsEnrol);
                printf("\nDate of enrollment:%s\n", dofEnrol);

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
             case 5:
                    exit(0);
                 break;

            default:
                printf("Invalid option");
                break;
            }
            printf("Entre yes(1) for main menu or no(0)\n ");
            scanf("%d", &choice);
        } while (choice != 0);
    }
    else
    {
        printf("Invalid User id");
    }
}
