#include<stdio.h>
int main(){
	float GPA;
	int i;
	for(i=0;i<3;i++)
	{
		scanf("%f",&GPA);
		if(GPA>4.3){
		    printf("�ֵܣ����ǲ��Ǿ��ͷ��");
	    }
	    else if(GPA>=4.0&&GPA<=4.3){
	        printf("������һ�����ɣ������");
	    }
	    else{
	    	printf("�㻹�����پ�һ��");
		} 
	}
	return 0; 
} 
