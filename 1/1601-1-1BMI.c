#include<stdio.h>
int main()
{
	float height;
	int weight;
	float bmi;
	
	printf("������ߣ��ף���");
	scanf("%f",&height);
	printf("�������أ�ǧ�ˣ���");
	scanf("%d",&weight);
	bmi=weight/(height*height);
	
	if(bmi<18.5){
		printf("BMIָ��Ϊ��%f��",bmi);
		printf("���ع���");
	}
	else if(bmi>=18.5&&bmi<24.9){
	    printf("BMIָ��Ϊ��%f��",bmi);
		printf("��������");
	}
	else if(bmi>=24.9&&bmi,29.9){
		printf("BMIָ��Ϊ��%f��",bmi);
		printf("���ع���");
	} 
	else{
		printf("BMIָ��Ϊ��%f��",bmi);
		printf("����");
	}
	return 0;
}
 
