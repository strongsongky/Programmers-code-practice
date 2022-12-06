function solution(board, moves) {
    let bascket = [];
    let answer = 0;
    for(let i = 0; i < moves.length; i++) {
    	
        const move = moves[i] - 1; 
        for(let j = 0; j < board.length; j++) {
            const doll = board[j][move];
                if(doll) {
             
                    board[j][move] = 0;
                    
                    if(bascket.length !== 0 && bascket[bascket.length-1] === doll) {
                    
                        bascket.pop();
                    
                        answer += 2;
                    } else {
                    	
                        bascket.push(doll);
                    }
                    break;   
                };
            };
    }
    return answer;
}