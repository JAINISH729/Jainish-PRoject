#include <stdio.h>

int main() {
    int score;
    char grade;

    printf("Enter your score: ");
    scanf("%d", &score);

    // Calculate grade using ternary operator
    grade = (score >= 90) ? 'A' :
            (score >= 80) ? 'B' :
            (score >= 70) ? 'C' :
            (score >= 60) ? 'D' :
            'F';

    printf("Your grade is %c. ", grade);

    // Provide additional comments based on grade using switch-case statement
    switch (grade) {
        case 'A':
            printf("Excellent work! ");
            break;
        case 'B':
            printf("Well done. ");
            break;
        case 'C':
            printf("Good job. ");
            break;
        case 'D':
            printf("You passed, but you could do better. ");
            break;
        case 'F':
            printf("Sorry, you failed. ");
            break;
    }

    // Check eligibility for next level using if-else statement
    if (grade != 'F') {
        printf("Congratulations! You are eligible for the next level.");
    } else {
        printf("Please try again next time.");
    }

    printf("\n");

    return 0;
}