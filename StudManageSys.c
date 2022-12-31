#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

void exit();

int main()
{
    // =============================|Declaring Variable for username and password (GLOBAL VARIABLE)|==============================
    char userName[50], pwd[50];

    // ===========================================|(\xdb) is used to display better UI|===========================================
    printf("\n \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb  LOGIN FIRST \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n ");

    printf("Username:");
    scanf("%s", &userName);

    printf("\nPassword:");
    scanf("%s", &pwd);

    if (strcmp(userName, "KCCITM") == 0 && strcmp(pwd, "admin@123") == 0 || strcmp(userName, "root") == 0 && strcmp(pwd, "exit") == 0)
    // ==============================================|(strcmp) is used to compare string|==============================================

    {
        int choice;
        int count = 0;

        do
        {
            // ========================================|Declaring variable (for HOME page)|========================================

            // clrscr();
            //  ===================================|to clear the screen (only works in turbo C)|===================================
            int opt;

            printf("\n1.Add Student Details\n 2.Preview student details \n 3.Grades of the students\n 4.Total Number of students\n 5. Exit\n");

            scanf("%d", &opt);

            // ============================================|Mani Menu in switch case|============================================

            switch (opt)
            {

                // ====================================|Declaring var fot students details|====================================
                char sName[100], regNo[100], doB[100], fName[100], mName[100], add[100], crsEnrol[100], dofEnrol[100];

                // ==========================================|Variable for Grades|=============================================
                float Maths, PPS, EE, Phy, softSkill;

                // ===========================================|To Add student detail|===========================================
            case 1:

                printf("\t\t---------------|Add Student Details|---------------\t\t\n");

                printf("Name of the student:");
                scanf("%[^\n]%*c", sName);

                printf("\nRegistration number:");
                scanf("%s", regNo);

                printf("\nDate of Birth:");
                scanf("%s", doB);

                printf("\nFather's name:");
                scanf("%s", fName);

                printf("\nMother's name:");
                scanf("%s", mName);

                printf("\nAddress:");
                scanf("%s", add);

                printf("\nCourse enrolled:");
                scanf("%s", crsEnrol);

                printf("\nDate of enrollment:");
                scanf("%s", dofEnrol);
                count++;
                break;

            case 2:
                // ======================================|Preview students details|======================================

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
            case 3:

                // ======================================|Preview students Grade|======================================

                printf("\t\t---------------|Add student name and grade|---------------\t\t\n");

                printf("Name of the student:");
                scanf("%[^\n]%*c", sName);

                printf("\nRegistration number:");
                scanf("%s", regNo);

                printf("\t\t---------------|Add Student Marks(Out of 100)|---------------\t\t\n");

                printf("Maths:");
                scanf("%f", &Maths);

                printf("PPS:");
                scanf("%f", &PPS);

                printf("EE:");
                scanf("%f", &EE);

                printf("Physics:");
                scanf("%f", &Phy);

                printf("Soft Skill:");
                scanf("%f", &softSkill);

                // ===========================================|Calculation of grades|======================================

                float sum = Maths + PPS + EE + Phy + softSkill;
                float percentage = (sum / 500) * 100;

                printf("Your overall percent is %f\% \n", percentage);

                if (percentage >= 95 && percentage < 100)
                {
                    printf("Your Grade: O (Outstanding) \n");
                }
                else if (percentage < 95 && percentage >= 90)
                {
                    printf("Your Grade: A+ \n");
                }
                else if (percentage >= 80 && percentage < 90)
                {
                    printf("Your Grade: A \n");
                }
                else if (percentage < 80 && percentage <= 70)
                {
                    printf("Your Grade: B+ \n");
                }
                else if (percentage < 70)
                {
                    printf("Your Grade: C \n");
                }

                break;
                // =====================================|To count number of student|==================================
            case 4:
                printf("%d Students \n", count);

                break;
                //=================================================|To exit|============================================
            case 5:
                exit(0);

                break;

            default:
                printf("Invalid option");
                break;
            }

            printf("Entre yes(1) for main menu or no(0) to exit\n ");
            scanf("%d", &choice);
        } while (choice != 0);
    }
    else
    {
        printf("Invalid User-Id or Password");
    }
}