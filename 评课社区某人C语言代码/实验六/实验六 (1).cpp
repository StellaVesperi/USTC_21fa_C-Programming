#include<stdio.h>
int qiuhe(int m,int n){
	int i,s=0;
	for(i=0;i<=n-m;i++)
		if((i+m)%7==0)
			s=s+i+m;
	return(s);		
} 
main()
{   int m,n;
	while(1)
	{	printf("���������m��n��");
		scanf("%d%d",&m,&n); 
		if(m>=n)
			printf("���벻��ȷ������������\n"); 
		else
		{ 	printf("%d",qiuhe(m,n));
			return 0;
		} 
    } 
}
