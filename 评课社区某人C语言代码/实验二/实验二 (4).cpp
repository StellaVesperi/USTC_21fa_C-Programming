
#include<stdio.h>
#include<math.h>
int main()
{float x,y;double n;
aa:printf("����������ƻ���������������ڡ���ʱ��n x y��");
scanf("%lf%f%f",&n,&x,&y) ;
if(y<=n*x&&y>0&&n>0&&x>0&&(floor(n+0.5)==n)) //����ȡ�����ж�nΪ���� 
	{n=n-ceil(y/x);
	printf("ʣ��ƻ��n=%d\n",(int)n);} 
else if (y>n*x&&y>0&&n>0&&x>0&&(floor(n+0.5)==n))
	printf("����ʱ��ӯ�࣬��ʱƻ����Ϊ0\n");
else  printf("��������ȷ������\n");
goto aa; 
return 0;}

