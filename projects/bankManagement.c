#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int personalInfo();
int displayInfo();
int havAccount();


    char userName[10];
    char gender[7];
    int DOB;
    char phnNo[15];
    char accType[10];
    char aadhar[15];
    double bal = 0;

int main()
{
    int num;
    printf("press 1 if you already have an account\n\npress 2 if you want to create new account");
    scanf("%d",&num);

    switch (num)
    {
    case 1:
        havAccount();
        break;

    case 2:
        personalInfo();
        break;
    
    default:
        break;
    }

    // personalInfo();
    // displayInfo();
}

int personalInfo()
{
    // char phnNo[15];
    printf("\nEnter your Phone number: ");
    fgets(phnNo, sizeof(phnNo), stdin);
    // printf("\nPhone no = %s", phnNo);

    // char gender[7];
    printf("\nEnter your gender: ");
    fgets(gender, sizeof(gender), stdin);
    // printf("You are %s", gender);

    // int DOB;
    printf("\nEnter Date of Birth (DDMMYYYY) eg.(02092004): ");
    scanf("%d", &DOB);
    // printf("DOB = %d", DOB);

    getchar();

    // char userName[10];
    printf("Enter your name: ");
    fgets(userName, sizeof(userName), stdin);
    // printf("Name = %s", userName);

    // char accType[10];
    printf("\nWhat type of account do you want to open? (Savings / Current): ");
    fgets(accType, sizeof(accType), stdin);
    // printf("\nYour account is a %s account", accType);

    // char aadhar[15];
    printf("\nEnter your Aadhar number: ");
    fgets(aadhar, sizeof(aadhar), stdin);
    // printf("Aadhar no. = %s", aadhar);

    // double bal = 0;
    printf("\nEnter amount you want to deposit at the time of opening: ");
    scanf("%lf", &bal);
    // printf("Balance is = %lf", bal);

    return 0;
}

int displayInfo()
{

    // char userName[10];
    // char gender[7];
    // int DOB;
    // char phnNo[15];
    // char accType[10];
    // char aadhar[15];
    // double bal = 0;

    system("cls");


    printf("Name = %s", userName);
    printf("You are %s", gender);
    printf("DOB = %d", DOB);
    printf("\nPhone no = %s", phnNo);
    printf("\nYour account is a %s", accType);
    printf("Aadhar no. = %s", aadhar);
    printf("Balance is = %lf", bal);

    return 0;
}

int havAccount()
{
    int num;
    printf("press 1 to get your information\n\npress 2 to change password\n\npress 3 to withdraw cash\n\npress  4 to check balance ");
    scanf(" %d ",&num);

    switch (num)
    {
    case 1:
        displayInfo();
        break;
    
    case 2:
        
        break;

    case 3:
        
        break;

    case 4:
        
        break;
    default:
        break;
    }
}