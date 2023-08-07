#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* rsp) {
    char* answer = (char*)calloc(1,sizeof(char)*100);
    //주먹 '0' 가위 '2' 보 '5'
    
    for(int i=0;i<strlen(rsp);i++){
        if(rsp[i]=='5')
           answer[i]='2';
       
       if(rsp[i]=='2')
           answer[i]='0';
       
       if(rsp[i]=='0')
           answer[i]='5';
   }
    
    return answer;
}