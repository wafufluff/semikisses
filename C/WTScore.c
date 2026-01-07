#include <stdio.h>


int main (){
    
    int score, time1H, time1M, round1, round2, time2H, time2M, round3, time3H, time3M, win, winH, winM;

    printf("Input World Tour Points: ");
    scanf("%d", &score);

    score = 2400 - score; // 1000 Points Needed

    round1 = (score / 2); // 1000 Points Needed / 2 Points Per Round = 500 Rounds
    time1H = (round1 * 10) / 60; //500 Rounds * 30 = 15000 Minutes / 60
    time1M = (round1 * 10) % 60;

    round2 = (score / 6);
    time2H = (round2 * 20) / 60;
    time2M = (round2 * 20) % 60;

    round3 = (score / 14);
    time3H = (round3 * 30) / 60;
    time3M = (round3 * 30) % 60;

    win = (score / 25);
    winH = (win * 30) / 60;
    winM = (win * 30) % 60;

    printf("\n ");

    printf("\nRound One (2 Points)");
    printf("\nPoints Needed: %d", score);
    printf("\nRounds Left: %d", round1);
    printf("\nTime Left: %d Hours %d Minutes", time1H, time1M);
    printf("\n ");

    printf("\nRound Two (6 Points)");
    printf("\nPoints Needed: %d", score);
    printf("\nRounds Left: %d", round2);
    printf("\nTime Left: %d Hours %d Minutes", time2H, time2M);
    printf("\n ");

    printf("\nRound Three (14 Points)");
    printf("\nPoints Needed: %d", score);
    printf("\nRounds Left: %d", round3);
    printf("\nTime Left: %d Hours %d Minutes", time3H, time3M);
    printf("\n ");

    printf("\nTournament Win (25 Points)");
    printf("\nPoints Needed: %d", score);
    printf("\nRounds Left: %d", win);
    printf("\nTime Left: %d Hours %d Minutes", winH, winM);
    printf("\n ");

    return 0;
}