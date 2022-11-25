function solution(k, m, score) {
    score = score.sort((a,b) => a-b)
    const box = []
    const len = score.length
    for(let i = 0 ; i < Math.floor(len/m) ; i ++) {
        const curBox = []
        for(let j = 0 ; j < m ; j ++) {
            curBox.push(score.pop())   
        }
        box.push(curBox)
    }
    return box.map(a => Math.min(...a)*m).reduce((a,b) => a+b, 0)
}