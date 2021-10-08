#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number,guess,num_guess=1;
    srand(time(0));
    number = rand()%100 +1; //generate number between 1-100
    printf("The Number Is %d\n",number);
    
    //do{
    //    printf("Guess the number between 1 to 100\n");
    //    scanf("%d", &guess);
    //    if(guess>number){
    //        printf("Lower number please!\n");
    //    }
    //    else if(guess<number){
    //        printf("Higher number please!\n");
    //    }
    //    else{
    //        printf("You guessed it in %d attempts\n", num_guess);
    //    }
    //    num_guess++;
    //} while (guess!=number);

    //for ( guess; guess!=number; num_guess++){
    //    printf("\nGuess the number between 1 to 100\n");
    //    scanf("%d", &guess);
    //    if(guess>number){
    //        printf("Lower number please!\n");
    //    }
    //    else if(guess<number){
    //        printf("Higher number please!\n");
    //    }
    //    else{
    //        printf("You guessed it in %d attempts\n", num_guess);
    //    }
    //}
    
    while (guess!=number){
        printf("Guess the number between 1 to 100\n");
        scanf("%d", &guess);
        if(guess>number){
            printf("Lower number please!\n");
        }
        else if(guess<number){
            printf("Higher number please!\n");
        }
        else{
            printf("You guessed it in %d attempts\n", num_guess);
        }
        num_guess++;
    }
    
    return 0;
}