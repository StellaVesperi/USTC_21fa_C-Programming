#include<stdio.h>
#include<string.h> 
char biaozhun[]={'A','a','B','b','C','c','D','d','E','e',
	'F','f','G','g','H','h','I','i','J','j','K','k','L',
	'l','M','m','N','n','O','o','P','p','Q','q','R','r',
	'S','s','T','t','U','u','V','v','W','w','X','x','Y',
	'y','Z','z','0','1','2','3','4','5','6','7','8','9'}; 
void ddl(char *a,char*b)
{   int n1=0,n2=0,del=0;//1Ϊ���ڣ�-1ΪС�� 
	char get1,get2;
	n1=strlen(a);
	n2=strlen(b);
/*	if(n1>n2)
	{	printf("��һ����");
		return;} 
	else if (n1<n2) 
    {	printf("�ڶ�����");
    	return;}  */
	for(int i=0;i<n1;i++)
	{	for(int j=0;j<61;j++)
			if(a[i]==biaozhun[j])
				get1=j;
		for(int j=0;j<61;j++)
			if(b[i]==biaozhun[j])
				get2=j;
		if(get1<get2)
		{	printf("�ڶ�����");
			return;} 
		else if(get1>get2)
		{	printf("��һ����");
			return;}	
	} 
	if(n1>n2)
	{	printf("��һ����");
		return;} 
	else if (n1<n2) 
    {	printf("�ڶ�����");
    	return;}  
	else  printf("һ����"); 
}
main()
{	int x; 
	char a[100]={0},b[100]={0}; 
	printf("��һ������:\n"); 
	gets(a); 
	printf("�ڶ�������:\n");
    gets(b);
	ddl(a,b);	 
}
