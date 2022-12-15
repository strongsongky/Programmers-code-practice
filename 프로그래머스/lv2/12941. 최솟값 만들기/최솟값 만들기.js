function solution(A,B){
  var answer = []
  var a = A.sort((a,b) => a-b)
  var b = B.sort((a,b) => b-a)
  for(var i=0; i<a.length; i++){
    answer.push(a[i]*b[i])
  }
  
  var result = answer.reduce((a,b) => a+b)
  return result
}