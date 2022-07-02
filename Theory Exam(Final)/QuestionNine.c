#include<stdio.h>

struct Student{
    int roll;
    int class;
    int marks;
};

int main(){
    int n;
    scanf("%d",&n);
    struct Student arr[n];
    for(int i =0;i<n;i++){
        scanf("%d %d %d",&arr[i].roll,&arr[i].class,&arr[i].marks);
    }
    int totalMarks =0;
    for(int i=0;i<n;i++){
        totalMarks+=arr[i].marks;
        
    }
    printf("%d\n",totalMarks);
}