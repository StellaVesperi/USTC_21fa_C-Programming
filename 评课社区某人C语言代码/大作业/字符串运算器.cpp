#include<bits\stdc++.h>
int i,j,k=0; 
void menu(){
	printf("*******�˵�*******\n"); 
	printf("0-�˳�����\n"); 
	printf("1-�����ַ�\n");
	printf("2-��ʾ�ַ���\n"); 
	printf("3-���ַ�������\n");
	printf("4-�ַ�������\n");
	printf("5-�ַ����Ƚ�\n");
	printf("6-�ַ�������\n");
	printf("7-�ַ�������\n");
	printf("8-���Ӵ�\n");
	printf("9-�Ӵ�����\n"); 
	printf("******************\n\n"); 
} 
void StrGet(char *s){
	getchar();//ȥ���������Ļس�������Ϊ֮ǰscanfֻ��ȡ��m��Ҳ������rewind(stdin)�����������  
	gets(s);
	k++; 
} 
void StrPut(char *s){
 	puts(s);
} 
int StrLen(char *s){
 	i=0;
 	while(s[i]) i++;
 	return(i);
} 
void StrCat(char *s,char *t){
	for(i=0;s[i]!='\0';i++);
	for(j=0;(s[i++]=t[j++])!='\0';); 
} 
int StrCmp(char *s,char *t){
	i=0;
	while(s[i]==t[i])
		if(s[i++]=='\0')
		return 0;
	return(s[i]-t[i]);
} 
void StrCpy(char *s,char *t){
	i=0;
	while((s[i]=t[i])) i++;
} 
void StrIns(char *s,char *t,int pos){  
	int l=0; 
	for(j=StrLen(s)-1;j>=pos;j--)
		s[j+StrLen(t)]=s[j];     
	for(l=pos,j=0;l<pos+StrLen(t);l++,j++) //iΪȫ�֣���StrLen����i++ 
		s[l]=t[j];  
} 
void StrSub(char *s,char *t,int pos,int n){
	for(i=pos-1,j=0;j<n;i++,j++)
		t[j]=s[i];
	t[j]='\0';
} 
int StrStr(char *s,char *t){
	int l=0;
	for(i=0;s[i]!='\0';i++)
	{	for(j=i,l=0;t[l]!='\0'&&(s[j]==t[l]);j++,l++);
			if(t[l]=='\0')
				return i; 
	} 
	return -1; 
}                                           
main(){	 
	int m,n,pos1,pos2,pos3; 
	char arr[1000][1000]={0}; 
	menu(); 
	while(1)
	{	printf("������˵�����:");
		scanf("%d",&m);
		putchar('\n');
		switch(m)
		{	case -1:menu();break;
			case 0: return 0; 
		    case 1: printf("���봮%d:",k+1);
					StrGet(arr[k]);
					break;
			case 2: for(i=0;i<k;i++){ 
						printf("��%d��:",i+1); 
						StrPut(*(arr+i)); 
					} 
					break;				 
			case 3: printf("��������������У�");
					scanf("%d",&pos1);
					printf("����Ϊ%d\n",StrLen(*(arr+pos1-1))); 
					break;
			case 4: printf("����*���ӵ���*֮��:");
					scanf("%d%d",&pos2,&pos1); 
					StrCat(*(arr+pos1-1),*(arr+pos2-1));
					break;					
			case 5: printf("����Ҫ�ȽϵĴ�����:");
					scanf("%d%d",&pos1,&pos2); 
					if(StrCmp(*(arr+pos1-1),*(arr+pos2-1))==0)printf("%s=%s",*(arr+pos1-1),*(arr+pos2-1));
					if(StrCmp(*(arr+pos1-1),*(arr+pos2-1))>0)printf("%s>%s",*(arr+pos1-1),*(arr+pos2-1));
					if(StrCmp(*(arr+pos1-1),*(arr+pos2-1))<0)printf("%s<%s",*(arr+pos1-1),*(arr+pos2-1));
					putchar('\n'); 
					break;
			case 6: printf("����*���Ƶ���*��:");
					scanf("%d%d",&pos2,&pos1); 
					StrCpy(*(arr+pos1-1),*(arr+pos2-1)); 
					break;
			case 7:	printf("�����봮�򡢲��봮�򡢲���λ��:");
					scanf("%d%d%d",&pos1,&pos2,&pos3);
					StrIns(*(arr+pos1-1),*(arr+pos2-1),pos3-1); 
					break;
			case 8:	printf("���ش����С�����λ�á���ʼ�±꼰��Χ��");
					scanf("%d%d%d%d",&pos1,&pos2,&pos3,&n);
					StrSub(*(arr+pos1-1),*(arr+pos2-1),pos3,n);
					printf("�Ӵ�Ϊ");
					StrPut(*arr+pos2-1);
					break;
			case 9: printf("�����Ҵ��򡢲���������:"); 
					scanf("%d%d",&pos1,&pos2); 
					if(StrStr(*(arr+pos1-1),*(arr+pos2-1))>=0) 
						printf("��ʼ�±�Ϊ%d\n",StrStr(*(arr+pos1-1),*(arr+pos2-1))+1);
					else printf("�Ҳ����Ӵ�\n");
					break;
		} 
	}		
}
