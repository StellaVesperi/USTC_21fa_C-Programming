#include<stdio.h>
int main()
{	int a[20]={0},m,num,N=0;
	char del='a'; 
	printf("��������\n");
	
	while(del!='\n') 
	{	N++;                //��a[1]��Ϊ��һԪ�� 
		scanf("%d",&a[N]);
		del=getchar(); 
	}
	
	printf("����(m ������:") ;
		scanf("%d%d",&m,&num);
		
	for(int i=N;i>m;i--)
		a[i+1]=a[i]; 
	a[m+1]=num;  
	 
	for(int i=1;i<=N+1;i++)
	    printf("%4d%c",a[i],i%4==0?'\n':' ');	
	return 0;
}
//123 234 345 456 567 678 789 111 222 333 444 555 666 777


