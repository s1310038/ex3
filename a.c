
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void toss() {
    int head = 0;
    int tail = 0;
    printf("Who are you?\n");
    char player_name[100];
    scanf("%99s", player_name);
    printf("Hello, %s!\n", player_name);

    for (int toss_num = 1; toss_num <= 3; toss_num++) {
        int outcome = rand() % 2; 
        if (outcome == 0) {
            printf("Round %d: Heads\n", toss_num);
            head++;
        } else {
            printf("Round %d: Tails\n", toss_num);
            tail++;
        }
    }

    printf("Heads: %d, Tails: %d\n", head, tail);

    if (head > tail) {
        printf("%s won!\n", player_name);
    } else {
        printf("%s lost\n", player_name);
    }
}

int main() {
    srand(time(NULL));
    toss();
    return 0;
}