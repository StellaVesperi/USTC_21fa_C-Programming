#include<stdio.h>
int main()
{int x;
printf("����ɼ�:"); 
scanf("%d",&x);
if(x<0||x>100)
	printf("�ɼ�����\n");
else 
  switch(x/10)
  {case 10:  
  case 9:printf("�ɼ��ȼ�ΪA\n");break;
  case 8:printf("�ɼ��ȼ�ΪB\n");break;
  case 7:printf("�ɼ��ȼ�ΪC\n");break;
  case 6:printf("�ɼ��ȼ�ΪD\n");break;
  default:printf("�ɼ��ȼ�ΪE\n");} 
return 0;}

