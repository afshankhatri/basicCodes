#include <stdio.h>
#include <math.h>

int add();
int sub();
int mult();
float div();
float sq();
float Sqrt();
int Pow();

int main()
{    //convert add,sub ,mult to float number
int num;

    printf("enter 0 to add\n");
    printf("enter 1 to sub\n");
    printf("enter 2 to mult\n");
    printf("enter 3 to div\n");
    printf("enter 4 to sq\n");
    printf("enter 5 to sqrt\n");
    printf("enter 6 to pow\n");

    printf("based on the above preference given above enter a number :");
    scanf("%d",&num);

    switch (num)
    {
    case 0:
        add();
        break;

    case 1:
        sub();
        break;

    case 2:
        mult();
        break;

    case 3:
        div();
        break;

    case 4:
        sq();
        break;

    case 5:
        Sqrt();
        break;
        
    case 6:
        Pow();
        break;

    default:
        break;
    }

    // add();
    // sub();
    // mult();
    // div();
    // sq();
    // Sqrt();
    // Pow();
}

int add()
{
    int n;
    int sum = 0;
    printf("enter how many numbers you want to add :");
    scanf("%d",&n);
    int arr[n];

    printf("enter nubers :");
    for (int  i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("numbers are :");
    for (int  i = 0; i < n; i++)
    {
        printf("%d + ",arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    printf("\nAddition = %d",sum);

    return 0;
    
}

int sub()
{
    int n;
    int sub = 0;
    printf("enter how many numbers you want to Subtract :");
    scanf("%d",&n);
    int arr[n];

    printf("enter nubers :");
    for (int  i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("numbers are :");
    for (int  i = 0; i < n; i++)
    {
        printf("%d - ",arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        sub = arr[i] - sub ;
    }
    printf("\nSubtraction = %d",sub);

    return 0;
}

int mult()
{
    int n;
    int mult = 1;
    printf("enter how many numbers you want to multiply :");
    scanf("%d",&n);
    int arr[n];

    printf("enter nubers :");
    for (int  i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("numbers are :");
    for (int  i = 0; i < n; i++)
    {
        printf("%d * ",arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        mult = arr[i] * mult ;
    }
    printf("\nMultiplication = %d",mult);

    return 0;
}

float div()
{
    int n;
    float div = 1;
    printf("enter how many numbers you want to divide :");
    scanf("%d",&n);
    int arr[n];

    printf("enter nubers :");
    for (int  i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("numbers are :");
    for (int  i = 0; i < n; i++)
    {
        printf("%d / ",arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        div =  arr[i] / div;
    }
    printf("\nDivision = %f",div);

    return 0;
    
}

float sq()
{
    float n;
    printf("enter a number : ");
    scanf("%f",&n);
    float a = n *n;
    printf("Sq. = %f",a);

    return 0;
}

float Sqrt()
{
    float n;
    printf("enter a number : ");
    scanf("%f",&n);
    float a = sqrt(n);
    printf("Sq. Root = %f",a);

    return 0;
}

int Pow()
{
    int n;
    int raise;
    printf("enter a number : ");
    scanf("%d",&n);
    printf("enter raise to power : ");
    scanf("%d",&raise);
    int a = pow(n , raise);
    printf("power of %d ^ %d = %d", n, raise, a);

    return 0;
}