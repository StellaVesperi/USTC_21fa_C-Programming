#include<stdio.h>
int main()
{float f,c; 
printf("�����뻪�϶�f��");scanf("%f",&f);
c=5.0/9*(f-32) ;
if(c>=-273.15)  //���϶Ⱦ������Ϊ-459.67�H 
	printf("���϶�%-.3f�¶�Ӧ���϶ȣ�%-.3f��",f,c);
else printf("��������ȷ���¶�");} 
