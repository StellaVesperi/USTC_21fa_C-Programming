#include<stdio.h>
void zhuanzhi(int *a,int n)
{	int temp; 
	for(int i=0;i<n;i++) 
		for(int j=0;j<n;j++) 
			if(i>j)	
			{	temp=a[i*n+j];
				a[i*n+j]=a[j*n+i];
				a[j*n+i]=temp;
			} 
}
main()
{   int n; 
	printf("����������");
	scanf("%d",&n);
	int a[n][n]; 
	for(int i=0;i<n;i++) 
	{	printf("�����%d��Ԫ��:",i+1);
		for(int j=0;j<n;j++) 
			scanf("%d",&a[i][j]); 
	} 
	zhuanzhi(*a,n);
	for(int i=0;i<n;i++) 
	{	for(int j=0;j<n;j++) 
		{	printf("%4d ",a[i][j]);
		}
		putchar('\n');  
	}
}
