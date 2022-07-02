// Question:  How many different ways are there to use functions? Explain with examples.
// Answer: There are four ways to use functions.
//  1)Functions with arguments and return values.
// Ex : –
// int sum(a,b){
//  int jog = a + b;
//  return sum; 
// }
// 2)Functions with arguments and without return values.
// Ex : –
// #include<stdio.h>
// int sum(a,b,*jog){
//  int *jog = a + b;
// }
// Int main (){
//  Int a=1,b=2,jog;
//  sum(a,b,&jog);
//  printf(“%d\n”,jog);
// }
// 3)Functions without arguments and with return values. 
// Ex : 
// #include<stdio.h>
// int sum(){
//   int  a=1,b=2;
//  return a+b;
// }
// Int main (){
//  int  jog = sum();
// printf(“%d\n”,jog);
// }
// 4) Functions without arguments and without return values.
// Ex : 
// #include<stdio.h>
// int sum(){
//   int  a=1,b=2;
//   int  jog = a+b;
// printf(“%d\n”,jog);
// }
// int main (){
//  sum();
// }

