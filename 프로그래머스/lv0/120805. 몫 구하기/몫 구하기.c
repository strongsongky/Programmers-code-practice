#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num1, int num2) {
    return num1 / num2;
}

int main() {
    int num1, num2;
    printf("Enter num1: ");
    scanf("%d", &num1);
    printf("Enter num2: ");
    scanf("%d", &num2);

    int result = solution(num1, num2);
    printf("Quotient: %d\n", result);

    return 0;
}