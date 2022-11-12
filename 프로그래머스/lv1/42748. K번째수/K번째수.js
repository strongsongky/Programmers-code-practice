function solution(array, commands) {
  let answer = [];

  commands.forEach((command) => {
    let pers = array.slice(command[0] - 1, command[1]);
    pers.sort((a, b) => a - b);
    answer.push(pers[command[2] - 1])
  })

  return answer;
}