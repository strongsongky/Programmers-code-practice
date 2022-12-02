function solution(numbers, hand) {
    var answer = '';
    const key = {
        1: [0,3], 2:[1,3], 3:[2,3],
        4: [0,2], 5:[1,2], 6:[2,2],
        7: [0,1], 8:[1,1], 9:[2,1],
        '*': [0,0], 0:[1,0], '#':[2,0]
    }
    const len = numbers.length;

    let handL = '*'; 
    let handR = '#';

    for(let i=0;i<len;i++){
        let num = numbers[i];

        if(num%3===1){        
            answer+='L';
            handL=num;
        } else if(num%3===0 && num!==0){
            answer+='R';
            handR=num;
        } 
        else{
            answer+=dis(key, num, hand, handL, handR);
            answer[answer.length-1]=== 'L'
                ? handL=num
                : handR=num;
        }        
    }
    return answer;    
}

function dis(key, num, hand, handL, handR){
    const handed = hand === 'left'? 'L':'R';

    const left = 
          Math.abs(key[num][0]-key[handL][0])+
          Math.abs(key[num][1]-key[handL][1]);
    const right = 
          Math.abs(key[num][0]-key[handR][0])+
          Math.abs(key[num][1]-key[handR][1]);

    if(left===right) return handed;

    return left<right ? 'L':'R';
}