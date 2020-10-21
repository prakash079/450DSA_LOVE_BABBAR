//Link-https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s/0

//Solution

#include <stdio.h>

int main() {
	//code
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,i,j;
	    scanf("%d",&n);
	    int arr[n];
        int count[3]={0,0,0};
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&arr[i]);
	        count[arr[i]]++;
	    }
	    count[1]=count[1]+count[0];
	    count[2]+=count[1];
	    /*i=3;
	    while(i--)
	    {
	        printf("%d ",count[i]);
	    }
	    printf("\n");
	    */
	    int ans[n];
	    for(j=0;j<n;j++)
	    {
	        ans[--count[arr[j]]]=arr[j];
	    }
	    for(i=0;i<n;i++)
	    printf("%d ",ans[i]);
	    printf("\n");
	}
	return 0;
}
