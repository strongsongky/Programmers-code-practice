#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    double sqrt_n = sqrt(n);
    int int_sqrt_n = (int)sqrt_n; 
    
    if (sqrt_n - int_sqrt_n == 0) {
        return 1; 
    } else {
        return 2;
    }
}