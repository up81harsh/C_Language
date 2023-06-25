#include <stdio.h>

int main() {
    int candidate1_votes = 0;
    int candidate2_votes = 0;
    int voter_choice = 0;

    printf("Welcome to the voting system!\n");

    while (voter_choice != 3) {
        printf("Please choose a candidate:\n");
        printf("1. Candidate 1\n");
        printf("2. Candidate 2\n");
        printf("3. Quit\n");
        scanf("%d", &voter_choice);

        switch (voter_choice) {
            case 1:
                candidate1_votes++;
                printf("You voted for Candidate 1.\n");
                break;
            case 2:
                candidate2_votes++;
                printf("You voted for Candidate 2.\n");
                break;
            case 3:
                printf("Thank you for voting!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    }

    printf("Candidate 1 received %d votes.\n", candidate1_votes);
    printf("Candidate 2 received %d votes.\n", candidate2_votes);

    if (candidate1_votes > candidate2_votes) {
        printf("Candidate 1 wins!\n");
    } else if (candidate2_votes > candidate1_votes) {
        printf("Candidate 2 wins!\n");
    } else {
        printf("It's a tie!\n");
    }

    return 0;
}

