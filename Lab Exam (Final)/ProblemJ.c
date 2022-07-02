#include <stdio.h>
#include <stdbool.h>
#include <string.h>
struct name
{
    char fnam[21];
    char snam[21];
};
struct uniqueName
{
    char fnam[21];
    char snam[21];
};

int main()
{
    int n;
    scanf("%d", &n);
    struct name names[n];
    struct uniqueName uniqueNames[n];
    int z=0;

    for(int i=0;i<n;i++){
        scanf("%s %s",&names[i].fnam,&names[i].snam);
        bool found = false;
         
        bool isFName =1;
        bool isSName = 1;

        for(int j=0;j<z;j++){  
             isFName = strcmp(names[i].fnam,uniqueNames[j].fnam);
             isSName = strcmp(names[i].snam,uniqueNames[j].snam);
             if(isFName==0&&isSName==0){
                found = true;
                break;
             }
            }
      if(found==false){
            strcpy(uniqueNames[i].fnam,names[i].fnam);
            strcpy(uniqueNames[i].snam,names[i].snam);
            z++;
        }   
    }

   
    if(n==z){
        printf("No\n");
    }
    else{
     printf("Yes\n");  
    }

   

}