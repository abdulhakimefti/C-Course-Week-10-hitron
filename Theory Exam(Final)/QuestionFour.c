#include <stdio.h>
 
int main()
{
	int   i, j, n,count;
	
	scanf("%d", &n);
    int arr[n],fq[n];
	for (i = 0; i <n; i++)
	{
    	scanf("%d", &arr[i]);
    	fq[i] = -1;
   	}     
 
	for (i = 0; i < n; i++)
	{
		count = 1;
		for(j = i + 1; j < n; j++)
		{
    		if(arr[i] == arr[j])
    		{
    			count++;
    			fq[j] = 0;
    		}
    	}
    	if(fq[i] != 0)
    	{
    		fq[i] = count;
		}
	}
	
 	for (i = 0; i <n; i++)
  	{
  		if(fq[i] != 0)
  		{
  			printf("%d occurs %d  times \n", arr[i], fq[i]);
		}		
  	}	     
 	return 0;
}