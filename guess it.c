#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){
    int number , guess , nguesses = 1;
    srand(time(0));
    number = rand()%100+1;
    do
    {
        printf("GUESS ANY NUMBER BETWEEN 1 TO 100 : \n");
        scanf("%d", &guess);

        if (guess > number)
        {
            printf("Lower number please\n");
        }
        else if (guess < number){
            printf("greater number please\n");
            
        }
        else {
            printf("Hurrah...! you got the number \nyou got it  in %d attempts\n",nguesses);
        }
        nguesses++;
    } while (guess != number);
    
    if (nguesses > 1 && nguesses <= 10)
        {
            printf("That's great you guessed it in very less attempts... you now have something to celebrate with your best friend...!");
        }
        else if(nguesses >= 11 && nguesses <= 20)
        {
            printf("you took toomany guesses very bad .....");
        }
        else{
            printf("Ayyo today is your bad day be careful...!");
        }
    return 0;
}


