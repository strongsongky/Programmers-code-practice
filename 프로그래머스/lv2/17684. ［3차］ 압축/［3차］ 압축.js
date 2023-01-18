function solution(msg) {
  var answer = [];
    var dic = ["A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T","U", "V", "W", "X", "Y", "Z"]; 
    while(msg.length !== 0) {
        var w = '';
        var wc = '';
        for ( var i = 0; i< msg.length; i ++) {
            w = msg.slice(0, i);
            wc = msg.slice(0, i+1);
            if (dic.indexOf(wc) === -1){ 
                answer.push(dic.indexOf(w)+1); 
                break;
            }
            if (i === msg.length -1 ){ 
                answer.push(dic.indexOf(wc)+1); 
            }
        }
        dic.push(wc); 
        msg = msg.slice(i); 
    }
    return answer;
}