function solution(number, limit, power) {
    const soldierArr = new Array(number+1)
    soldierArr.fill(0)
    for(let i = 1; i<soldierArr.length; i++){
        for(let j = 1; j <= Math.sqrt(i) ; j++){
            if(i % j === 0){
                soldierArr[i]++
                if(i / j !== j) soldierArr[i]++
            }
        }
        if(soldierArr[i] > limit) soldierArr[i] = power
    }
    return soldierArr.reduce((a,b) => a+b,0)
}