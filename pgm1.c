//add array elements
#include<stdio.h>
int main()
{
	int a[50];
	int n;
	int i;
	int sum=0;
	printf("enter the elements in array");
        scanf("%d",&n);
        if( n<=50)
	  {
 		printf("enter the values of array");
        	for(i=0;i<n;i++)
       		{
		 scanf("%d",&a[i]);
        	 sum=sum+a[i];
       		}
	     printf("sum of array %d",sum);
          }
       else
        printf("error");
	return 0;
}
