#include <stdio.h>
#include <math.h>
int main()
{
	float a,m;
	int n;
	int c[100]={0};
	int d[100]={0};
	int i=0,k=0;
	printf("enter a float number��");
	scanf("%f",&a);
	//�����ж����ӡ
	if(a<0){
		printf("%c",'-');
	}
	else{
		printf("%c",' ');
	}
	n=(int)fabs(a);
	m=fabs(a)-(int)fabs(a);
	//����ת������
	while(n){
		c[++i]=n%2;
		n=(int)(n/2);
	}
	//С��ת������
	while(m){
		d[k++]=(int)(m*2);
		m=m*2-(int)(m*2);
	}
	//��ӡ��ֵ�ж�
	if((fabs(a)-(int)fabs(a))<=1e-6){
		for(int j=i;j>=1;--j){
		printf("%d",c[j]);
		}
	}
	else if((int)a!=0){
			for(int j=i;j>=1;--j){
				printf("%d",c[j]);
		}
			printf("%c",'.');
			for(int l=0;l<k;++l){
				printf("%d",d[l]);
		}
		}
		else{
			printf("0%c",'.');
			for(int l=0;l<k;++l){
				printf("%d",d[l]);
		}
		}
	return 0;
}
