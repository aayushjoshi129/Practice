function Add(a,b){
  return a+b;
}

function Subtract(a,b){
  return a-b;
}

function Multiply(a,b){
  return a*b;
}

function Divide(a,b){
  return (a/b).toFixed(2);    // toFixed(digit) --> It let the output to round upto the given number of decimals.
}
export {Add,Subtract,Multiply,Divide}