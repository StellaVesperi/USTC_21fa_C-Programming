#include<stdio.h>
int main()
{	
	char t; 
	int space=0,pic=0,LN=0,oth=0,a[27]={0},b[27]={0};
	int i,d;
	printf("���뱻ͳ���ַ���(ʹ��Ctrl+Z+�س���������)\n");
    for(;t=getchar(),t!=EOF;)
	{	
		switch(t)
			{	
				case ' ':space++;break;
				case '\t':pic++;break;
				case '\n':LN++;break;
				default:oth++; 
			}
		
		if(t<='z'&&t>='a')
			{
				a[t-'a'+1]++;
				a[0]++;
			}	
		else if(t<='Z'&&t>='A') 
			{
				b[t-'A'+1]++;
				b[0]++;
			}
		}
		
	for (printf("����Ӣ����ĸ��%d����Сд��ĸ��%d��\n",a[0]+b[0],a[0]),i=1,d=1;i<=26;i++,d++) 
		printf("%c:%d��%c",i+'a'-1,a[i],d%5==0?'\n':' ');	
	for (printf("\n��д��ĸ��%d��\n",b[0]),i=1,d=1;i<=26;i++,d++) 
		printf("%c:%d��%c",i+'A'-1,b[i],d%5==0?'\n':' ');
	printf("\n�ո�%d�� ",space);	
	printf("�Ʊ����%d�� ",pic);	
	printf("���з���%d�� ",LN);	
	printf("�����ַ���%d�� ",oth);	
}

