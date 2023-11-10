//merage and sort array
#include<stdio.h>
int sort(int*,int);
int merge(int*,int*,int,int);
int main()
{
 	int n1,n2,i,j,a[50],b[50];
	printf("Enter the number of elements of arry one:");
	scanf("%d",&n1);
	printf("Enter the number of elements of arry two:");
	scanf("%d",&n2);
 	if((n1<=0||n1>=50)&&(n2<=0||n2>=50))
		printf("Number of elements must be in between 0 and 50");
	else
	{	
		printf("Enter the elements of arry one: ");
		for(i=0;i<n1;i++)
			scanf("%d",&a[i]);

		printf("Enter the elements of arry two: ");
		for(i=0;i<n2;i++)
			scanf("%d",&b[i]);
		sort(a,n1);
		printf("Sorted arry one: ");
		for(i=0;i<n1;i++)
			printf("%d ",a[i]);
		printf("\n");
		sort(b,n2);
		printf("Sorted arry two: ");
		for(i=0;i<n2;i++)
			printf("%d ",b[i]);
		printf("\n");
		merge(a,b,n1,n2);
	}	
	return 0;
}
int sort(int ab[50],int n)
{
	int i,j,temp=0;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(ab[i]>ab[j])
			{
				temp=ab[i];
				ab[i]=ab[j];
				ab[j]=temp;
			}
		}
	}
}	
int merge(int a[50],int b[50],int n1,int n2)
{
	int i=0,j=0,k=0,n,c[50];
	n=n1+n2;
	for(i=0;i<n1;i++)
		c[i]=a[i];
	
	for(j=0;j<n2;j++)
	{
		c[i]=b[j];
		i++;
	}
	printf("Mearged arry : ");
	for(i=0;i<n;i++)
	{
		printf("%d ",c[i]);
	}
}
