#include<stdio.h>

int main(){
    FILE * inputFile;
    FILE * outFile;
    inputFile = fopen("input.txt","r");
   
    outFile = fopen("output.txt","w");
     if(inputFile==NULL){
        fprintf(outFile,"Not Found\n");
        return 0;
    }
    int n;
    fscanf(inputFile,"%d",&n);
    int sum =0;
    for(int i =0;i<n;i++){
        int a;
        fscanf(inputFile,"%d",&a);
        sum+=a;
    }
    fprintf(outFile,"%d\n",sum);

    fclose(inputFile);
    fclose(outFile);
}