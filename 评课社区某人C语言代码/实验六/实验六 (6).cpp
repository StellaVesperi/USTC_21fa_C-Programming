#include<stdio.h>
#include<string.h>
void trans(char a[])
{   int i,len;
	char temp;
	len=strlen(a);
	for(i=0;i<=len/2;i++)
	{	temp=a[i];
		a[i]=a[len-i-1]; //*(a+i)=*(len-i-1),��a+iָ���ֵ��ֵ 
		a[len-i-1]=temp;
	} 
}  //������ָ�벻��Ҫͨ����������ֵ���� 
main()
{   char a[1000]={0};
	printf("�����ַ���\n");
	gets(a);
	trans(a);
	for(int i=0;a[i]!=0;i++)
		printf("%c",a[i]);
}
