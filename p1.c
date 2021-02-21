#include<stdio.h>
int main()
{
	int arr[100],n,target,i,count;
	printf("array size:\n");
	scanf("%d",&n);
	printf("enter the array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\ntarget element: ");
    scanf("%d", &target);
	count=-1; 
    for(i=0; i<n; i++)
    {
        if(target==arr[i])
        {
            count=1;
            break;
        
	    }   
    }
    if(count==1)
    printf("%d",i);
    else
    printf("%d",count);
}
