function solution(brown, yellow) {
    const sum = (brown /2) + 2;
    for(let i=3;(2*i)<=sum; i++){
        if((i-2)*(sum-i-2)==yellow)
            return[sum-i,i];
    }
}