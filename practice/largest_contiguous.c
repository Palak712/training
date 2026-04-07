#include <stdio.h>
#include <limits.h>
int main(){
	int start,end,i,j,k,arr[]={-2,1,-3,4,-1,2,1,-5,4};
	int max_sum=INT_MIN;
	int n=sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			int sum=0;
		    for(k=i;k<=j;k++){
		    	sum+=arr[k];
			}
			if(sum>max_sum){
				max_sum=sum;
				start=i;
				end=j;
			}
		}
	}
	printf("the contiguous subarray=");
	for(i=start;i<=end;i++)
	{
		printf("\t%d",arr[i]);
	}
	printf("\nThe largest contiguous sum=%d",max_sum);
	return 0;
}
