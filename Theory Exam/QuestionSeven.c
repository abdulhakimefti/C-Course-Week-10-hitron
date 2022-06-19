#include<stdio.h>

int count_swaps(int arr[],int n) {
    int swap_t = 0;
    for(int pos=0;pos<n;pos++){
        for(int check = pos+1;check<n;check++){
            if(arr[check]<arr[pos]){
                int temp = arr[check];
                arr[check] = arr[pos];
                arr[pos] = temp;
                swap_t++;
            }
        }
    }
    return swap_t;
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int t = count_swaps(arr,n);
    printf("%d\n",t);
     for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}   



// #include<stdio.h>
// int swap(int *a,int *b){
//     int temp = *b;
//     *b = *a;
//     *a = temp;
// }
// void sort(int n,int a[]){

//         for(int steps=0;steps<n;steps++){
//             int min = a[steps],pos = steps;
//             for(int i =steps;i<n;i++){
//                 if(a[i]<min){
//                     min = a[i];
//                     pos =i;
//                 }
//             }
//             swap(&a[steps],&a[pos]);
//         }
// }

// int main (){
//     int n;
//     scanf("%d",&n);
//     int a[n];
//     for(int i  =0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     // sort(n,a);
//     is_reverse_sorted(n,a);
//     for(int i =0;i<n;i++){
//         printf("%d ",a[i]);
//     }
// }