#include<stdio.h>
void choose(int *a,int n)
{	int i,j,k,temp;
	for(i=0;i<n-1;i++)
	{	k=i; 
		for(j=i+1;j<n;j++)
			if(*(a+j)>*(a+k))
				k=j;
		if(k!=i) 
		{	temp=*(a+k);
			*(a+k)=*(a+i);
			*(a+i)=temp;
		}
	}
} 
main()
{   int n; 
	printf("��Ҫ������");
	scanf("%d",&n);
	int a[n]={0};                         		
	for(int i=0;i<n;i++)
	{	printf("��%d������",i+1);
		scanf("%d",&a[i]);
	}
	choose(a,n);
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
} 
