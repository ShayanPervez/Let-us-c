#include <stdio.h>

int main()
{
    int n = 21, player, computer;

    while (n > 1)
    {
        computer = 1; 
        printf("\nComputer picked %d stick(s).\n", computer);
        n -= computer;

        if (n == 1)
        {
            printf("Only 1 matchstick left. You have to pick it.\n");
            printf("You lose! Computer wins.\n");
            break;
        }

        printf("Matchsticks remaining: %d\n", n);
        printf("Enter the amount of sticks you want to pick up (1 to 4): ");
        scanf("%d", &player);

        if (player < 1 || player > 4)
        {
            printf("Invalid move! You must pick between 1 and 4 matchsticks.\n");
            continue;
        }

        n -= player;

        if (n == 1)
        {
            printf("Only 1 matchstick left. You have to pick it.\n");
            printf("You lose! Computer wins.\n");
            break;
        }
    }

    return 0;
}
