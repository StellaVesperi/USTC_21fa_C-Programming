#include <stdio.h>
#include <string.h>
struct student 
{	char name[20];
	int score; 
};
int main()
{	student stu[10],temp;  
	int i,j,k;
	for(i=0;i<=9;i++)
	{	printf("�������%2d�˵�������",i+1);
		scanf("%s",&stu[i].name); 
	}
	for(i=0;i<=9;i++)
	{	printf("�������%2d�˵ĳɼ���",i+1);
		scanf("%d",&stu[i].score); 
	}
	
	//ð������ 
	for(i=0;i<10;i++)
		for(j=0;j<10-i;j++)
			if(stu[j].score<stu[j+1].score)
			{	temp=stu[j];
				stu[j]=stu[j+1];
				stu[j+1]=temp;
			} 
     //ѡ������ 
/*	for(i=0;i<10;i++)
	{	k=i;
		for(j=i+1;j<10;j++)
			if(stu[j].score>stu[k].score);
				k=j; 
		if(k!=i)
		{	temp=stu[i];
			stu[i]=stu[k];
			stu[k]=temp;	 
		} 
	}
*/	
	for(i=0;i<=9;i++)
	{	printf("%15s",stu[i].name);
		printf(" %5d\n",stu[i].score); 
	}
	return 0;
}
