#include<stdio.h>
struct student
{	char id[20];
	char name[10];
	float grade[3];
	float ave; 
}stu[5]; 
main()
{	FILE *fp=fopen("stud_dat","wb"); 
	int i; 
	printf("����ѧ�š����������γɼ�:\n");
	for(i=0;i<5;i++)
	{	scanf("%s %s %f%f%f",stu[i].id,stu[i].name,&stu[i].grade[0],&stu[i].grade[1],&stu[i].grade[2]);	
		stu[i].ave=(stu[i].grade[0]+stu[i].grade[1]+stu[i].grade[2])/3;
		fprintf(fp,"%s %s %f %f %f %f\n",stu[i].id,stu[i].name,stu[i].grade[0],stu[i].grade[1],stu[i].grade[2],stu[i].ave);
	}	
	fclose(fp);
} 
/*
PB01 ��ѩ�� 67 79 89
PB02 ��һ�� 99 100 94
PB03 �ּ��� 11 22 33 
PB04 �λ� 66 77 83
PB05 ������ 95 40 12
*/
