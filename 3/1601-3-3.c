#include<stdio.h>     
int main(){
	int a,b,temp,r,m,n,m1,n1;
	
	printf("���������������������� ��ĸ����");
	scanf("%d%d",&n,&m);
	
	if((m<=0)||(n<=0)||(n>=m)){    //�жϷ��ӷ�ĸ�Ƿ�������ȷ��ϵ 
		printf("�������������");
	}
	
	else {                  //��շת������������ 
    m1=m;
 	n1=n;
 	while(temp=(m%n)){
 		m=n;
 		n=temp;
 	}
 	r=n;
 	a=n1/r;b=m1/r;         //�������Լ�������� 
    
	printf("����%d/%d �����Ϊ%d/%d",n1,m1,a,b);
	}
    
	return 0;
} 
