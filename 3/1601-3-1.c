#include<stdio.h>
#include<math.h>
int main(){
	float x,y,z,p,s;
	printf("���������ε�3���ߣ�");
	scanf("%f%f%f",&x,&y,&z);
	
	if((x+y<=z)||(z+y<=x)||(x+z<=y))//�ж��ܷ񹹳������� 
	printf("Error");
	
	else if ((x+y>z)&&(z+y>x)&&(x+z>y))
	{p=(x+y+z)/2;
	 s=sqrt(p*(p-x)*(p-y)*(p-z));    //���׹�ʽ����� 
	 
	 if((x==y)&&(y==z)&&(z==x))  //�ж��Ƿ��ǵȱ� 
	 printf("�߳�Ϊ%f%f%f���������ǵȱ������Σ������Ϊ��%f",x,y,z,s);
	 
	 else if((x==y)||(y==z)||(z==x)&&((x*x+y*y-z*z)*(x*x+z*z-y*y)*(y*y+z*z-x*x)!=0))    //�ж��Ƿ񲻵ȱߵ��ǵ��� 
	 printf("�߳�Ϊ%f%f%f���������ǵ��������Σ������Ϊ��%f",x,y,z,s);
	 
	 else if((x*x+y*y==z*z)||(x*x+z*z==y*y)||(y*y+z*z==x*x)&&((x-y)*(y-z)*(z-x)!=0))    //�ж��Ƿ��ǲ��ǵ�����ֱ�������� 
	 printf("�߳�Ϊ%f%f%f����������ֱ�������Σ������Ϊ��%f",x,y,z,s);
	 
	 else if((x*x+y*y==z*z)||(x*x+z*z==y*y)||(y*y+z*z==x*x)&&((x-y)*(y-z)*(z-x)==0))    //�ж��Ƿ��ǵ���ֱ�������� 
	 printf("�߳�Ϊ%f%f%f���������ǵ���ֱ�������Σ������Ϊ��%f",x,y,z,s);
	 
	 else
	 printf("�߳�Ϊ%f%f%f����������һ�������Σ������Ϊ��%f",x,y,z,s);
    }
	
	return 0; 
} 
