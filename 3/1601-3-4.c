#include<stdio.h>
int main(){
 int i,n;

 printf("����һ������n,(n>=3&&n<=45):\n");
 scanf("%d",&n);

 while(n<3||n>45){   //���������������� 
  printf("����");
  scanf("%d",&n);
 }

 int a[n];a[0]=0;a[1]=1;
 printf("쳲��������е�ǰ%d��Ϊ��1\n1\n",n);   //�ȴ�ӡǰ���� 

 for(i=2;i<=n-1;i++){
  a[i]=a[i-1]+a[i-2];     //��ͨ�����������ÿһ���ӡ 
  printf("%d\n",a[i]);
     }

}
