function foo(x:int):int {
  return x + 1;
}

function bar():void {
  $x = (int)10; //Explicitly type $x as an integer
  echo foo($x);
}

function main():void {
  bar();
}

//This corrected code explicitly types the variable $x as an integer, eliminating the potential for type mismatch errors.