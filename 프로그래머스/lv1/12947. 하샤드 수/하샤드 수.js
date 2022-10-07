function solution(x) {
    return x % (String(x).split('').map(item=>+item).reduce((a,b)=>a+b)) == 0 ? true : false
   
}