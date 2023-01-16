const isPrime = (n) => {
    for(let i = 2; i <= Math.sqrt(n); i++) {
        if(n % i === 0) {
            return false;
        }
    }
    return true;
}

const solution = (n, k) => {
    const remainArr = [];
    let numberArr;
    let answer = 0;
    while(n > 0) {
        remainArr.unshift((n % k).toString());
        n = Math.floor(n / k);
    }
    numberArr = [...remainArr.join("").split(/0{1,}/g)];
    numberArr.forEach(x => {
        const num = parseInt(x);
        if(num > 1 && isPrime(num)) {
            answer++;
        }
    })

    return answer;
}