#include <stdio.h>
int main()
{
    int n, a, j, h, z;
    a = 0;
    printf("Welcome\n");
    printf("Wanna play quiz press <<1>>\n");
    printf("not in mood Exit press <<2>>\n");
    scanf("%d", &n);
    for (int h = n; h < 3; h++)
    {
        if (h == 2)
        {
            break;
        }
        else if (h == 1)
        {
        }

        for (int i = 1; i < 5; i++)
        {
            switch (i)
            {
            case 1:
                printf("Who is ram?\n");
                printf("1.Character from Mahabharat\n");
                printf("2.Character from Ramayana\n");
                printf("Enter ur Option\n");
                scanf("%d", &n);

                if (n == 1)
                {
                    printf("_____You r wrong____-\n");
                }
                else if (n == 2)
                {
                    printf("____You r right____\n");
                    a++;
                }
                else
                {
                    printf("\nInvalid\n");
                }
                printf("\n");
                break;
            case 2:
                printf("Who is CM of UP?\n");
                printf("1.Aditya Nath Yogi\n");
                printf("2.Narendra Modi\n");
                printf("Enter Your Option\n");
                scanf("%d", &j);
                if (j == 1)
                {
                    printf("____You are Correct____");
                    a++;
                }
                else if (j == 2)
                {
                    printf("____You are wrong_____");
                }
                else
                {
                    printf("\nInvalid plz try again");
                }
                break;
                case 3 : printf("Full form of Gla\n1.Ganesh lal agrawal\n2.Ganpat lal aggrawal\n");
               scanf("%d",&z);
                if  (z == 1){
                    printf("\nyou are correct");
                    a++;
                }else if (z == 2){
                  printf("\nYou are wrong");
                }else{
                    printf("\nInvalid");
                }
                 break;
                           
                
            }
            printf("\n");
        }
        printf("\n<<<<You Scored %d/3>>>>\n", a);
        if(a == 3){
            printf("Top Notch");
        }
        else if (a == 2)
        {
            printf("___Excellence____");
        }
        else if (a == 1)
        {
            printf("___Well try____");
        }
        else
        {
            printf(" ____You have to work hard_____");
        }
    }
    printf("\nCredits :<<<<< Mayank sharma,Mayank Singh>>>>>>");

    printf("\nThanks");
    return 0;
}