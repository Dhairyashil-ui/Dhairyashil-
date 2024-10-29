#include <stdio.h>


int points[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
int calculate_score(char word[]) {
    int score = 0;


    for (int i = 0; word[i] != '\0'; i++) {
        char letter = word[i];

        if (letter >= 'a' && letter <= 'z') {
            letter = letter - 32;
        }


        if (letter >= 'A' && letter <= 'Z') {
            score += points[letter - 'A'];
        }
    }

    return score;
}

int main() {
    char word1[50], word2[50];

    // Get words from both players
    printf("Player 1: ");
    scanf("%s", word1);

    printf("Player 2: ");
    scanf("%s", word2);

    // Calculate scores
    int score1 = calculate_score(word1);
    int score2 = calculate_score(word2);

    // Compare scores and print result
    if (score1 > score2) {
        printf("Player 1 wins!\n");
    } else if (score2 > score1) {
        printf("Player 2 wins!\n");
    } else {
        printf("Tie!\n");
    }

    return 0;
}
