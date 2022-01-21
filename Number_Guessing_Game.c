#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number,guess,count=1, guess_chance=10;
    srand(time(0));
    number = rand()%100 +1; //generate number between 1-100
    
    printf("\nGuess the number between 1 to 100");
    while (1<=guess_chance){
        printf("\n\nEnter Your Guess: ");
        scanf("%d", &guess);
        if(guess>number){
            printf("Lower number please!\n");
        }
        else if(guess<number){
            printf("Higher number please!\n");
        }
        else{
            printf("You guessed it in %d attempts\n", count);
            break;
        }
        guess_chance--;
        printf("%d Chance left.",guess_chance);
        count++;
        printf("");
    }
    if (guess_chance==0){
        printf("\n\nGame Over!!!");
        printf("\nNumber is %d",number);
    }
    
    return 0;
}
