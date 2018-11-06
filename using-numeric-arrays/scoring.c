// scoring.c: using a two-demensional array to store basketball point totals

#include <stdio.h>
#define PLAYERS 5 
#define GAMES 4

int scores[6][5];
float score_avg[6], best_avg;
int point_total, best_player;
int counter1, counter2;

int main()
{
    // The outer loop is for each of the games 
    for (counter2 = 1; counter2 <= GAMES; counter2++)
    {
        printf("\n Getting scoring totals for game #%d.\n", counter2);
        // The inner loop is for each player in the specific game.
        for (counter1 = 1; counter1 <= PLAYERS; counter1++)
        {
            printf("What did player #%d score in the game\? ", counter1);
            scanf("%d", &scores[counter1][counter2]);
        }
    }

    //Looping through the array to calculate scoring average per player
    for (counter1 = 1; counter1 <= PLAYERS; counter1++)
    {
        point_total = 0;
        for (counter2 = 1; counter2 <= GAMES; counter2++)
        {
            point_total += scores[counter1][counter2];
        }
        score_avg[counter1] = (float)point_total/GAMES;

    }

    // Now loop through and store who has the best scoring average
    best_avg = 0;
    for (counter1 = 1; counter1 <= PLAYERS; counter1++)
    {
        if (score_avg [counter1] > best_avg)
        {
            best_avg = score_avg[counter1];
            best_player = counter1;
        }
    }

    printf("\nPlayer #%d had the best scoring average, \n", best_player);
    printf("at %.2f points per game.\n", score_avg[best_player]);

    return 0;
}
