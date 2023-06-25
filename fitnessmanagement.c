#include <stdio.h>

int main() {
    int calories_burned = 0;
    int total_calories = 0;
    int num_days = 0;
    float average_calories = 0.0;

    printf("Welcome to the Fitness Management System!\n");

    printf("Enter the number of days you have been tracking your calories: ");
    scanf("%d", &num_days);
	int i;
    for( i = 1; i <= num_days; i++) {
        printf("Enter the number of calories burned on day %d: ", i);
        scanf("%d", &calories_burned);
        total_calories += calories_burned;
    }

    average_calories = (float)total_calories / num_days;

    printf("Total calories burned: %d\n", total_calories);
    printf("Average calories burned per day: %.2f\n", average_calories);

    return 0;
}

