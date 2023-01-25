#include <stdio.h>
#include <string.h>
#include <conio.h>

int addStudentDetails(void);
int previewStudentDetails(void);
int addStudentGrades(void);
int countStudents(void);
void exit();

// <========================================|Declaring variable (GLOBAL)|========================================>

int count = 0;
// <====================================|Declaring var fot students details|====================================>

char sName[100], sName1[100], regNo[100], doB[100], fName[100], mName[100], add[100], crsEnrol[100], dofEnrol[10
                                                                                                              0];
// <==========================================|Variable for Grades|=============================================>

float Maths, PPS, EE, Phy, softSkill, sum, percentage;

int main(void)
{
    // <====================|Declaring Variable for username and password (GLOBAL VARIABLE)|=====================>
    char userName[50], pwd[50];

    // <==================================|(\xdb) is used to display better UI|==================================>
    printf("\n \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb LOGIN \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n ");

    printf("Username:");
    scanf("%s", &userName);

    printf("\nPassword:");
    scanf("%s", &pwd);

    // <==================================|(strcmp) is used to compare string|==================================>
    if (strcmp(userName, "KCCITM") == 0 && strcmp(pwd, "admin@123") == 0 || strcmp(userName, "root") == 0 && strcmp(pwd, "exit") == 0)

    {
        int choice;

        do
        {

            // clrscr();
            //  <=========================|to clear the screen (only works in turbo C)|=========================>
            int opt;

            printf("\n 1.Add Student Details\n 2.Preview student details \n 3.Grades of the students\n 4.Total Number of students\n 5. Exit\n");

            scanf("%d", &opt);

            // <===================================|Mani Menu in switch case|===================================>

            switch (opt)
            {

            case 1:
                addStudentDetails();

                break;

            case 2:
                previewStudentDetails();

                break;

            case 3:

                addStudentGrades();

                break;

            case 4:
                countStudents();

                break;

            case 5:
                // <============================================|To exit|=======================================>
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
        printf("Invalid UserId or Password");
    }
  
}

// <===========================================|To Add student detail|===========================================>

int addStudentDetails(void)
{
    printf(" \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb Add Student Details \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb  \n");

    printf("Name of the student:");
    scanf("%s%s", sName, sName1);

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

    // <=====================================|To Count Number Of Student|======================================>
    count++;
}

// <======================================|Preview students details|======================================>
int previewStudentDetails(void)
{

    printf("\n\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb Details preview \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
    printf("\nName of the student: %s %s \n", sName, sName1);
    printf("\nRegistration number:%s\n", regNo);
    printf("\nDate of birth:%s\n", doB);
    printf("\nFather's name:%s\n", fName);
    printf("\nMother's name:%s\n", mName);
    printf("\nAddress:%s\n", add);
    printf("\nCourse enrolled:%s\n", crsEnrol);
    printf("\nDate of enrollment:%s\n", dofEnrol);
}

// <======================================|Preview students Grade|======================================>

int addStudentGrades(void)
{

    printf("\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb Add student name and grade \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");

    printf("Name of the student:");
    scanf("%s%s", sName, sName1);

    printf("\nRegistration number:");
    scanf("%s", regNo);

    printf("\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb Add Student Marks(Out of 100) \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");

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

    // <===========================================|Calculation of grades|======================================>

    sum = Maths + PPS + EE + Phy + softSkill;
    percentage = (sum / 500) * 100;

    printf("Your overall percent is %f%% \n", percentage);

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
}

// <=====================================|To count number of student|==================================>
int countStudents()
{
    printf("\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb Number Of Students \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
    printf("%d Students \n", count);
}
