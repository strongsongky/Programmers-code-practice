function solution(priorities, location) {
    var answer = 0;
    var firstEl = 0;
    
    while(true){
        firstEl = priorities.shift();
        
        // 나머지 인쇄 대기목록에서 현재 대상보다 중요도가 높은 문서 존재 => 가장 마지막에 push
        if( firstEl < Math.max(...priorities) ){
            priorities.push(firstEl);
            if (location === 0) location = priorities.length-1;
            else location--;
        } else { // 출력
            answer++;
            if (location === 0) break;
            else location--;
        }
        
    }

    return answer;
}