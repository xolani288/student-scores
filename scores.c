#include <cs50.h>
#include <stdio.h>


int main (void)
{
    int n, b;
    do
    {
        n = get_int ("Your score for Paper 1: ");
        b = get_int ("Your score for Paper 2: ");
    }
    while (n < 1 || n > 300);





    int scores[n];
    int score[b];

    for (int i = 0; i == 0; i++)
    {
        scores[i] = get_int ("Question paper score for paper 1: ");
        printf("For paper 1 you got = %i\n ", 100 * n / scores[0] );
    }
    for (int j = 0; j == 0; j++)
    {
        score[j] = get_int ("Question paper score for paper 2: ");
        printf("For paper 2 you got = %i\n ", 100 * b /  score[0]);



    }
        int totalscr = n + b;
        int total = (100 * totalscr / (scores[0] + score[0]));
        printf("total %i\n ", total);

}




