#include<stdio.h>
main()
{	char name[30]={0},t; 
	int a[27]={0},b[27]={0},i,d;
	printf("���뱻ͳ���ļ���:");
	gets(name); 
	FILE *fp=fopen(name,"r");
	if(fp==NULL)
	{	printf("can not find this file");
		exit(0);
	}
	
	t=fgetc(fp);
	for(;t!=EOF;)
	{	if(t<='z'&&t>='a')
		{	a[t-'a'+1]++;
			a[0]++;
		}	
		else if(t<='Z'&&t>='A') 
		{	b[t-'A'+1]++;
			b[0]++;
		}
		t=fgetc(fp);
	}
	for (printf("����Ӣ����ĸ��%d��\nСд��ĸ��%d��\n",a[0]+b[0],a[0]),i=1,d=1;i<=26;i++,d++) 
		printf("%c:%d��%c",i+'a'-1,a[i],d%5==0?'\n':' ');	
	for (printf("\n��д��ĸ��%d��\n",b[0]),i=1,d=1;i<=26;i++,d++) 
		printf("%c:%d��%c",i+'A'-1,b[i],d%5==0?'\n':' ');
	fclose(fp); 
} 
