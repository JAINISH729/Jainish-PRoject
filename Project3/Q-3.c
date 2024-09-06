#include <stdio.h>

int main() {
    int num, first_digit, last_digit, sum;

    printf("Enter any number: ");
    scanf("%d", &num);

    last_digit = num % 10;

    while (num >= 10) {
        num = num / 10;
    }
    first_digit = num;

    sum = first_digit + last_digit;

    printf("The sum of the first and the last digit: %d\n", sum);

    return 0;
}
