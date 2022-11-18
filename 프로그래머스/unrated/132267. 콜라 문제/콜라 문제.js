function solution(a, b, n) {
    var answer = 0;

    var redundancy = 0;
    while (n >= a) {
        redundancy = n % a
        n = Math.floor(n / a) * b

       // 여기가 다름
        answer += n

        n += redundancy
    }

    return Math.floor(answer);
}
