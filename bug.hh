function foo(x:int):int {
  return x + 1;
}

function bar():void {
  $x = 10;
  echo foo($x);
}

function main():void {
  bar();
}

//This code is intended to add 1 to the integer variable x. However, it contains an error that can lead to unexpected results.