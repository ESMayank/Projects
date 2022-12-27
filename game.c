#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int number,guess,nguess = 0;
    srand(time(0));
    number = rand()%100+1;
    do
    {  printf("Guess the Number\n");
       scanf("%d",&guess);
        if (guess < number)
        {
            printf("Higher the number\n");
        }
        else if (guess > number){
            printf("Lower the number\n");
        }
        else {
            printf("yah you got it\nYou took %d times of guesses",nguess);
        }
        nguess++;
        
    } while (guess!=number);
    
}