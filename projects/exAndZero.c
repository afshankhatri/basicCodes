#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int matrix();
int winCheck();
char arr[10] = {'0','1','2','3','4','5','6','7','8','9'};

int main()
{  
    
    int num;
    printf("Press 0 to quit or press  1 to start : ");
    scanf("%d",&num);

    switch (num)
    {
    case 0:
        break;
    
    case 1:
        matrix();
        break;

    default:
        printf("\nenter a valid number\n\n");
        break;
    }

    int status = -1;
    int player = 1;
    int input;

    while (status == -1)
    {
        player = (player % 2 ==0) ? 2 : 1;
        char plot;
        plot = (player % 2 ==0) ? 'O' : 'X';
        printf("turn of %d",player);
        scanf("%d",&input);
        if (input < 1 || input >9)
        {
            break;
        }
        arr[input] = plot;
        matrix();

        
        int check = winCheck();
        if (check == 1)
        {
            printf("%d is WINNER",player);
            break;
        }
        else if (check == 0)
        {
            printf("match DRAW");
            break;
        }
        
        player++;
    }
}

int matrix()
{
    // char arr[10] = {'0','1','2','3','4','5','6','7','8','9'};
    system("cls");
    printf("~~== X and 0 ==~~\n");
    printf("     |     |    \n");
    printf("  %c  |  %c  |  %c  \n",arr[7],arr[8],arr[9]);
    printf("_____|_____|____\n");
    printf("     |     |    \n");
    printf("  %c  |  %c  |  %c  \n",arr[4],arr[5],arr[6]);
    printf("_____|_____|____\n");
    printf("     |     |    \n");
    printf("  %c  |  %c  |  %c  \n",arr[1],arr[2],arr[3]);
    printf("     |     |    \n");

    return 0;
}

int winCheck()
{//return 1 for win   ||   return 0 for draw   ||   return -1 contineu
    if (arr[1] == arr[2] == arr[3])
    {
        return 1;
    }
    else if (arr[4] == arr[5] && arr[5] == arr[6])
    {
        return 1;
    }
    else if (arr[7] == arr[8] && arr[8] == arr[9])
    {
        return 1;
    }
    else if (arr[7] == arr[4] && arr[4] == arr[1])
    {
        return 1;
    }
    else if (arr[8] == arr[5] && arr[5] == arr[2])
    {
        return 1;
    }
    else if (arr[9] == arr[6] && arr[6] == arr[3])
    {
        return 1;
    }
    else if (arr[9] == arr[5] && arr[5] == arr[1])
    {
        return 1;
    }
    else if (arr[7] == arr[5] && arr[5] == arr[3])
    {
        return 1;
    }
    else
    {
        int count =0 ;
        for (int i = 1; i < 10; i++)
        {
            if (arr[i]=='X' || arr[i]=='O' )
            {
                count++;
            }
        }
        if (count ==9)
        {
            return 0;
        }
        return -1;
        
        
    }
    
   

    
    
}