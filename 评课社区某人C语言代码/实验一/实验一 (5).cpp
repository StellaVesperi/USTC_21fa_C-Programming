#include<stdio.h>
#include<math.h>
#define PI 3.14159265358979
int main()
{float R,H,V; 
printf("������Բ����뾶R��");scanf("%f",&R);
printf("������Բ�����H��");scanf("%f",&H);
if (R>0&&H>0) 
	{V=PI*R*R*H; 
	printf("Բ�������Ϊ%-f",V);}
else printf("\n��������ȷ��Բ�������");  }
