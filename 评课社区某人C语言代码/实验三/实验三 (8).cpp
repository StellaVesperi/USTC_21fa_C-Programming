#include<stdio.h>
int main()
{char zimu; 
printf("������ĸ:");
zimu=getchar() ;
if(zimu>='a'&&zimu<='z')
	{zimu=zimu+'A'-'a';
	printf("СдתΪ��д��%c\n",zimu);}
else if (zimu>='A'&&zimu<='Z') ; 
else {
	printf("��������ȷ����ĸ");
	goto end;} 

switch (zimu)
	{case 'A':
	case 'E':
	case 'I':
	case 'O':
	case 'U':printf("Yes ");break; 
	default :printf("No ") ; }
printf("%d %d",zimu,zimu-'A'+'a');
end: 
return 0;
}

