#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){

     srand(time(0));

    // Generate random number between 1 and 100
    int i = (rand() % 100) + 1;
    int guesses=0;
    // printf("Random number between 1 and 100: %d\n", i);



    // printf("Random number between 1 and 100: %d\n", randomNumber);

    int guessed;
   
   do
   {
    printf("Guess A Number: ");
    scanf("%d",&guessed);
    if (guessed<i)
        printf("Higher Number please \n");

    else if (guessed>i)
        printf("Lower Number please \n");

    else
        printf("Congrats!!\n");
   
    
    guesses++;
   } while (guessed!=i);

   printf("You Guessed the number %d in %d guesses" , i , guesses);





   

    
    return 0;
}