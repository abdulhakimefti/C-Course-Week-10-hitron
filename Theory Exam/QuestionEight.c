// i) Has return + Has parameter
// #include<stdio.h>

// int odd_even(int v){
//     int ck = v%2;
  
//     return ck;
// }
// int main(){
//     int val;
//     scanf("%d",&val);
//     int l = odd_even(val);
//     if(l==0){
//         printf("Even\n");
//     }
//     else if(l==1){
//         printf("Odd\n");
//     }
// }

// ii) No return + Has parameter

// #include<stdio.h>

// int odd_even(int *v){
//     *v = *v%2;
 
// }
// int main(){
//     int val;
//     scanf("%d",&val);
//     odd_even(&val);
//     if(val==0){
//         printf("Even\n");
//     }
//     else if(val==1){
//         printf("Odd\n");
//     }
// }

// iii) Has return + No parameter

// #include<stdio.h>

// int odd_even(){
  
//     int val;
//     scanf("%d",&val);
//     int ck = val%2;
//     return ck;
// }
// int main(){
//      int l = odd_even();
//         if(l==0){
//             printf("Even\n");
//         }
//         else if(l==1){
//             printf("Odd\n");
//         }
// }

// iv) No return + No parameter

#include<stdio.h>

int odd_even(){
  
    int val;
    scanf("%d",&val);
    int ck = val%2;
        if(ck==0){
            printf("Even\n");
        }
        else if(ck==1){
            printf("Odd\n");
        }
}
int main(){
        odd_even();
}