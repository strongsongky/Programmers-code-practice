#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int dot[], size_t dot_len) {
    int answer = 0;
    
    int x = dot[0];
    int y = dot[1];
    
    if (x > 0 && y > 0)
        return 1; 
    else if (x < 0 && y > 0)
        return 2; 
    else if (x < 0 && y < 0)
        return 3;
    else if (x > 0 && y < 0)
        return 4; 
    else
        return 0;
    return answer;
}