#include<stdio.h>
int main()
{
	int m,n,temp,r,s; 
	printf("��������������:");
	scanf("%d%d",&m,&n);
	s=m*n; 
	if(m>0&&n>0)
	{	if(m<n)
		{	temp=n;
			n=m;
			m=temp;
		} 
		for(;(r=m%n)!=0;)
		{   m=n;
			n=r;	
		}
		m=s/n;
		printf("���Լ��:%d,��С������%d",n,m); 
	}
	else printf("���벻��ȷ");	
} 
