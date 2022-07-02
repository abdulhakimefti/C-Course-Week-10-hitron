#include<stdio.h>
int main(){
    FILE *logFile = fopen("log.txt","a");
    fprintf(logFile,"hello2\n");
}