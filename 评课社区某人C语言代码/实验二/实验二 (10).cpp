
#include<stdio.h>
#include<math.h>
#define PI 3.14159265358979
int main()
{float R,H,V,C,S1,S2,M; 
printf("������Բ׶�뾶R=");scanf("%f",&R);
printf("������Բ׶�ĸ�H=");scanf("%f",&H);
if (R>0&&H>0) 
	{V=1.0/3*PI*R*R*H; C=2*PI*R;
	S1=PI*R*R;
	M=sqrt(H*H+R*R);
	S2=M*C/2;
	printf("���V=%-.2f\n�����ܳ�C=%-.2f\n�����S1=%-.2f\n�����S2=%-.2f",V,C,S1,S2);}
else printf("��������ȷ��Բ�������"); return 0;}
