const solution = food => {
    let answer = "";
    
    for (let i=0; i<food.length; i++ ){
        answer += String(i).repeat(Math.floor(food[i]/2));
    }
    return answer + "0" + [...answer].reverse().join("");
}