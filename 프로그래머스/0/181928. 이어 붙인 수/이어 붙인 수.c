#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num_list[], size_t num_list_len) {
    int oddSum = 0;
    int evenSum = 0;

    for (size_t i = 0; i < num_list_len; ++i) {
        if (num_list[i] % 2 == 0) {
   
            evenSum = evenSum * 10 + num_list[i];
        } else {
 
            oddSum = oddSum * 10 + num_list[i];
        }
    }

    return oddSum + evenSum;
}