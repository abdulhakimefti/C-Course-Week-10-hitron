// #include<stdio.h>
// struct Fun{
//     int sum;
// };
// int main(){
//     int a=10;
//     int *p = &a;
//     int **q = &p;
//     printf("%p\n",p); //var adress
//      printf("%d\n",*p); // output 10
//     printf("%d\n",**q); //Output =10

// }
// #include<stdio.h>
// int sum(int a,int b, int *jog){
//   *jog = a + b;
// }
// int main (){
//  int a=1,b=2,jog;
//  sum(a,b,&jog);
//  printf("%d\n",jog);
// }

// #include<stdio.h>
// struct Fun{
//     int sum;
// };
// int main(){
//     struct Fun test;

//     struct Fun *first;
//     // (*first).sum = 10;
//         test.sum =10;
//     printf("%d",(*first).sum);
// }
// #include<stdio.h>
// int main()
// {
//     int a=20;
//     int *b=&a;
//     *b=9;
//     printf("Address=> %p value => %d\n",&a,a);
//     printf("Address=> %p value => %d\n",b,*b);
//     return 0;
// }



// #include<stdio.h>
// int main()
// {
//     char a='B';
//     char *b=&a;
//     *b='D';
//     printf("Address => %p value => %c\n",&a,a);
//     printf("Address => %p value =>  %c\n",b,*b);
//     return 0;
// }

// // Structure Sum এর মান পরির্বতন  Pointer ব্যবহার করেঃ

// #include<stdio.h>
// struct Fun
// {
//     int sum;
// };
// int main()
// {
//     struct Fun change={50};
//     int *a=&change.sum;
//     *a=40;
//     printf("%d\n",change.sum);

//     return 0;
// }