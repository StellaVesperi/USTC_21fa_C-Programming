#include<stdio.h>
int main()
{float x;
 printf("����һ����0��30 ֮���ʵ��������ҿ���\n");
 scanf("%f",&x);
 if (x>=0&&x<10){
    printf("x=%fʱ��y=%f",x,x);
 }
 else if (x>=10&&x<20){
    printf("x=%fʱ��y=%f",x,x*x+1);	
 }
 else if (x>=20&&x<30){
 	printf("x=%fʱ��y=%f",x,x*x*x+x*x+1);
 }
 else printf("���������������Χ��"); 
 return 0;
}

