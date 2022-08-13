#include<stdio.h>
#define N 10 
struct DATA{
	int year,month,day;
};
struct BOOK{
	int id;
	char name[20];
	char author[20];
	char press[20];
	float price;
	struct DATA data;
}; 
void read(struct BOOK *book){
	printf("[���][����][����][������][�۸�][��][��][��]\n");
	int i; 
	for(i=0;i<N;i++){
		 scanf("%d %s %s %s %f%d%d%d",&book[i].id,book[i].name
		 ,book[i].author,book[i].press,&book[i].price,
		 &book[i].data.year,&book[i].data.month,&book[i].data.day);
	} 
}
void print(struct BOOK *book){
	int i; 
	for(i=0;i<N;i++)
		printf("[���]%d[����]%s[����]%s[������]%s[�۸�]%f[��������]%d.%d.%d\n"
		,book[i].id,book[i].name,book[i].author,book[i].press,book[i].price,
		book[i].data.year,book[i].data.month,book[i].data.day);	
}
void sort(struct BOOK *book){
	struct BOOK temp;
	int i,j;
	for(i=0;i<N-1;i++)
		for(j=i+1;j<N;j++)
			if(book[j].id<book[i].id){
				temp=book[j];
				book[j]=book[i];
				book[i]=temp;
			}
}
main(){
	struct BOOK book[N];
	read(book);
	sort(book);
	print(book);
}
//1 C���ԣ������ŵ��ɺ� ��ѩ�� 1414 0 2020 9 1 
//2 C���ԣ����ɺõ���� ��һ�� 5203 11 4514 1 1 
//3 C���ԣ�����׵���� ��־�� 5203 22 2020 10 2 
//4 C���ԣ�����׵��ǹ� �λ� 5204 33 2020 11 3 
//5 C���ԣ��Ӹǹ׵�ɥ�� �ּ��� 5203 44 2020 12 4 
//6 C���ԣ���ɥ����� ������ 5203 55 2021 1 3 
//7 C���ԣ�����ص����� ��ѩ�� 5203 66 2020 1 2 
//8 C���ԣ������������� ��ѩ�� 5203 77 2020 4 10 
//9 C���ԣ������㵽���� ��ѩ�� 5203 88 2020 2 9 
//10 C���ԣ������������� ��ѩ�� 5203 99 2020 9 2  
