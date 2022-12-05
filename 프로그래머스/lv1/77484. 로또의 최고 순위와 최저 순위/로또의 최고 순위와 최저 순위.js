function solution(lottos, win_nums) {
    const result = [];

    let correctCnt = lottos.filter(num => win_nums.includes(num)).length;
    let zeroCnt = lottos.filter(num => num === 0).length;
    let minRank = 7-correctCnt >= 6 ? 6 : 7-correctCnt;
    let maxRank = zeroCnt === 6 ? 1 : minRank - zeroCnt;

    result.push(maxRank, minRank);

    return result;
}