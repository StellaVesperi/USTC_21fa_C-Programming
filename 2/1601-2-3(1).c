#include<stdio.h>
int main()
{int m;
 printf("����һ������(0<=m<30)��\n");
 scanf("%d",&m);
 if (m>=0&&m<30)
 {
 	switch(m/10){
 		case 0:printf("m=%dʱ��f(m)=%d",m,m);break;
 		case 1:printf("m=%dʱ��f(m)=%d",m,m*m+1);break;
 		case 2:printf("m=%dʱ��f(m)=%d",m,m*m*m+m*m+1);break;
	 }
 }
 else printf("����ķ�Χ����\n");
 return 0;
}
//�ݣ�ִ�г�����ʾ�ﶼ������
