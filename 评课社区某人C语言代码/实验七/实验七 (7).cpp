#include<stdio.h>
void mm(float arr[],int n,float *ax,float *in)
{  	for(int i=0;i<n;i++)
	{	if(arr[i]>*ax)
			*ax=arr[i];
		if(arr[i]<*in) 
			*in=arr[i]; 
	} 
}   
main()
{	int n;
	printf("��Ҫ���ٸ�����");
	scanf("%d",&n);
	float arr[n];
	for(int i=0;i<n;i++)
	{	printf("��%d������",i+1);
		scanf("%f",&arr[i]);
	}	   
	float max=arr[0],min=arr[0],*ax=&max,*in=&min; 
	mm(arr,n,ax,in); 
	printf("max=%f,min=%f",max,min); 
} 
