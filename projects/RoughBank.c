#include <stdio.h>

int personalInfo();
int display();

int main()
{
    personalInfo();
    display();
}

int personalInfo()
{
  char name[20];
  int age;
  int dob;
  double aadhar;
  char pan[20];

  printf("enter name : ");
  scanf("%s",&name);
  
  printf("enter age : ");
  scanf("%d",&age);
  
  printf("enter date of birth : ");
  scanf("%d",&dob);
  
  printf("enter aadhar number: ");
  scanf("%lf",&aadhar);
  
  printf("enter pan number : ");
  scanf("%s",pan);
  
  return 0 ;
}

int display()
{
    char name[20];
  int age;
  int dob;
  double aadhar;
  char pan[20];
  
  printf("name is : %s\n",name);
  printf("age is : %d\n",age);
  printf("date of bith : %d\n",dob);
  printf("aadhar number is : %lf\n",aadhar);
  printf("pan number is : %s\n",pan);
  
  return 0;
}