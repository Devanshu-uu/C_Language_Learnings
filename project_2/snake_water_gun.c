#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int snake, water, gun;
    int player, computer = rand() % 3;
    int *ptr = &computer;
    printf("READ BEFORE PLAY!!! \n");
    printf("Choose 0->Snake \n");
    printf("Choose 1->Water \n");
    printf("Choose 2->Gun \n");
    printf(" \n");
    printf(" \n");
    printf(" \n");

    while (1)

    {

        int snake, water, gun;
        int player, computer = rand() % 3;
        int *ptr = &computer;

        printf("Choose 0->Snake or 1->Water or 2->Gun:  ");
        scanf("%d", &player);

        if (player == 0 && computer == 1)

        {

            printf("Computer chooses %d \n", computer);
            printf("Player chooses %d \n", player);
            printf("Player wins!! \n");
        }
        else if (player == 0 && computer == 2)
        {
            printf("Computer chooses %d \n", computer);
            printf("Player chooses %d \n", player);
            printf("Computer wins!! \n");
        }
        else if (player == 1 && computer == 0)
        {
            printf("Computer chooses %d \n", computer);
            printf("Player chooses %d \n", player);
            printf("Computer wins!! \n");
        }
        else if (player == 1 && computer == 2)
        {
            printf("Computer chooses %d \n", computer);
            printf("Player chooses %d \n", player);
            printf("Player wins!! \n");
        }
        else if (player == 2 && computer == 1)
        {
            printf("Computer chooses %d \n", computer);
            printf("Player chooses %d \n", player);
            printf("Computer wins!! \n");
        }
        else if (player == 2 && computer == 0)
        {
            printf("Computer chooses %d \n", computer);
            printf("Player chooses %d \n", player);
            printf("Player wins!! \n");
        }

        else
        {
            printf("Computer chooses %d \n", computer);
            printf("Player chooses %d \n", player);
            printf("Its a Draw \n");
        }
    }

    return 0;
}