#include<stdio.h>
#include<stdlib.h>
struct node{
	int num;
	struct node *next; 
}; 
struct node *CreateListR(){//β�巨 
	struct node *head=NULL,*p,*rear;
	int num;
	printf("num(��0����):");
	scanf("%d",&num);
	while(num!=0){   
		p=(struct node *)malloc(sizeof(struct node));
	    p->next=NULL;
	    p->num=num; 
		if(!head)head=p;
		else rear->next=p; 
		rear=p; 
		printf("num(��0����):");
		scanf("%d",&num); 
	}  
	return head; 		
} 
void PrintList(struct node *head){
	struct node *p=head;
	while(p){
		printf("%d\n",p->num);
		p=p->next;
	} 
} 
struct node *trans(struct node *p){
	struct node *q;
	if(p==NULL||p->next==NULL)  //�ų��ձ�򵥽ڵ� 
		return p;
	else
	{	q=trans(p->next);       //trans�Ѳ����ƶ���������β�� 
		p->next->next=p;          
		p->next=NULL;           
		return q;	
	} 
} 
main(){
	struct node *head;
	head=CreateListR();
	head=trans(head);
	putchar('\n'); 
	PrintList(head);
} 
