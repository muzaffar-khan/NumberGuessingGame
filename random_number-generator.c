#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number;
    srand(time(0));
    number = rand()%100 +1; //generate number between 1-100
    printf("The Number Is %d\n",number);
    
    return 0;
}