#include<stdio.h>
void udf_strcat(char a[],char b[])
{	int i,j; 
	for(i=0;a[i];i++); 
	for(j=0;a[i]=b[j];i++,j++);
}

int main()
{	char a[100]={0},b[100]={0};
    int k;         
	printf("�������1���ַ�:\n");
	gets(a); 
	printf("�������2���ַ�:\n");
	gets(b);
	udf_strcat(a,b);     
	for(k=0;a[k];k++)
		printf("%c",a[k]); 	
	return 0;
} 
//abcdefghikjlm
//987654321ttt

