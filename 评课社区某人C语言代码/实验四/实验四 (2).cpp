#include<stdio.h>
#include<math.h>
int main()
{
	int a[700]={0} ,fro,beh,d=0,i,j,k,l;
	
	for(i=1;(i+316)*(i+316)<=999999;i++) //д��������λ����ƽ���� 
		a[i]=(i+316)*(i+316);

	for(j=1;j<i;j++)      
	{
		fro=a[j]/1000;        //����int��������ȡǰ��λ����λ
		beh=a[j]-fro*1000;          
		
		if((sqrt(fro)==int(sqrt(fro)))&sqrt(beh)==int(sqrt(beh)))
		{d+=1;printf("%d%c",a[j],d%5==0?'\n':' ');}
	} 
	return 0; 
} 
