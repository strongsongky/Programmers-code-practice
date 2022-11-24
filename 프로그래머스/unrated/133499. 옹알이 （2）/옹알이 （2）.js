
// 근우
function solution(babbling) {
    let answer = 0;
    const results = [];
    const vowels = ["aya", "ye", "woo", "ma"];

    babbling.forEach((babble) => {
        vowels.forEach((vowel) => {
            const duplicateVowels = vowel + vowel; // 똑같은 vowel이 연속으로

            if (!babble.includes(duplicateVowels)) { // 오지 않는다면
                babble = babble.replaceAll(vowel, " "); // 해당 vowel을 " "로 교체
            }
        });

        results.push(babble); // 모든 vowel을 제거한 후에 results 배열에 추가
    });

    results.forEach((result) => { // results 배열에 있는 인자의
        result = result.replaceAll(" ", ""); // " "를 ""로 교체

        if (result.length == 0) { // 인자 길이가 0이라면, answer++
            answer++;
        }
    })

    return answer;
}