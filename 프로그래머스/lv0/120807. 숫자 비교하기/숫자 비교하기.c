#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num1, int num2) {
    int answer = (num1 == num2) ? 1 : -1;
    return answer;
}

int main() {
    int num1 = 5;
    int num2 = 5;
    
    int result = solution(num1, num2);
    
    if (result == 1) {
        printf("num1 and num2 are equal.\n");
    } else if (result == -1) {
        printf("num1 and num2 are different.\n");
    }
    
    return 0;
}