#include<stdio.h>
#include<stdlib.h> 
struct node{
	char name[20];
	int	id,sex,age;
	float score; 
	struct node *next; 
}; 

struct node *order(struct node *head){    
	struct node *p,*q,*t=(struct node *)malloc(sizeof(struct node));  //һ��Ҫ����ռ䣬��Ȼt�޷������� ����������p��q�����пռ�ģ������� 
	int i; 
    for(p=head;p!=NULL&&p->next!=NULL;p=p->next)
    {	for(q=p->next;q!=NULL;q=q->next)
        {	if(p->id > q->id)
	        {	t->id=p->id;	t->age=p->age;	t->score=p->score;	t->sex=p->sex;
				p->id=q->id;	p->age=q->age;	p->score=q->score;	p->sex=q->sex;
				q->id=t->id;	q->age=t->age;	q->score=t->score;	q->sex=t->sex; 
				for(i=0;i<20;i++){	t->name[i]=p->name[i]; p->name[i]=q->name[i];	q->name[i]=t->name[i]; }	   
	    	}
        }
    }  
	free(t); 
} 
void DeleteLast(struct node *head){
	struct node *p=head,*rear; 
	while(p->next)
	{	rear=p;
		p=p->next;
	}
	free(p);
	rear->next=NULL; 
} 	

struct node *CreateListF(void){
	struct node *head, *p;
	int id;
	head=NULL;
	printf("            [����][�Ա�][����][�ɼ�]\n[ѧ��]");
	scanf("%d",&id);
	while (id!=0)
	{	p=(struct node *)malloc(sizeof(struct node));
		p->id=id;
		scanf("%s %d%d%f",p->name,&p->sex,&p->age,&p->score);
		p->next = head;
		head = p;
		printf("[ѧ��]");
		scanf("%d",&id);
	}
	return head;
}
struct node *CreateListR(void){
	struct node *head, *rear, *p;
	int id;
	head = NULL;
	printf("            [����][�Ա�][����][�ɼ�]\n[ѧ��]");
	scanf("%d", &id);
	while (id!=0) 
	{	p=(struct node *)malloc(sizeof(struct node));
		p->next=NULL;
		p->id=id;
		scanf("%s %d%d%f",p->name,&p->sex,&p->age,&p->score);
		if (!head) head=p;
		else rear->next=p;
		rear=p;
		printf("[ѧ��]");
		scanf("%d", &id);
	}
	return head;
}
struct node *CreateListO(void){
    struct node *head=CreateListF();
	order(head);
	return head; 
}
struct node *ReadFile(void){        
	struct node *head=NULL,*p,*rear; 
	FILE *fp=fopen("Student_information.txt","r"); 
	if(fp==NULL)
	{	printf("�Ҳ����ļ�\n");
		return 0;
	} 
	fgetc(fp); 
	if(feof(fp))
	{	printf("���ļ���\n");
		fclose(fp);
		return head; 
	}        
	rewind(fp); 
	while(!feof(fp))
	{	p=(struct node *)malloc(sizeof(struct node));
		p->next=NULL; 
		fscanf(fp,"%d%s %d%d%f\n",&p->id,p->name,&p->sex,&p->age,&p->score);
		if(!head) head=p;
		else rear->next=p;
		rear=p;  
	} 
	fclose(fp);
	return head; 
} 
void PrintList(struct node *head){
	struct node *p=head;
	if(head) 
	{	printf("[ѧ��]    [����]   [�Ա�]   [����]   [�ɼ�]\n");
		while (p) 
		{	printf("%6d %9s   %6d   %6d   %6.2f\n",p->id,p->name,p->sex%2,p->age,p->score);
			p = p->next;
		}
	}
	else printf("��δ��������!\n"); 
}
struct node *InsertPos(struct node *head,struct node *q,int pos){
	struct node *p=head;
	if(!head)
	{	head=q;
		return head;
	} 
	if(pos==1)
	{	q->next=head;
		head=q;
		return head;
	}
	while(pos-2)
	{	p=p->next;
		pos--;
	}
	q->next=p->next;
	p->next=q; 
	return head; 
} 
struct node *InsertList(struct node *head, struct node *q){
	struct node *p;
	if(!head)
	{	head=q;
		return head;
	}
	if(head->id > q->id)
	{	q->next=head;
		head=q;
		return head;
	}
	p=head;
	while(p->next&&p->next->id<q->id)
		p=p->next;
	q->next=p->next;
	p->next=q;
	return head;
}
struct node *DeletePos(struct node *head,int pos){  
	if(!head)
	{	printf("������");
		return 0;
	}
	struct node *p=head,*q=head->next;
	
	if(p->next==NULL)
	{	free(p);
		return 0;
	}	
	if(pos==1)
	{	head=head->next;
		free(p);
		return head;		 
	} 
	while(pos-2)
	{	p=p->next;
		q=q->next; 
		pos--;
	}
	p->next=q->next;
	free(q);
	return head;
}
struct node *DeleteId(struct node *head, int id){   
	struct node *p, *q;
	if (head && head->id==id)
	{	p=head;
		head = p->next;
		free(p);
		return head;
	}
	q=p=head;
	while (p && p->id!=id)
	{	q=p;
		p=p->next;
	}	  
	if (p) 
	{	q->next = p->next;
		free(p);
		return head;
	}
	printf("Not Found!\n");
	return head;
}
struct node *IdFind(struct node *head,int id){
	while(head!=0)
	{	if(head->id==id) return head;
		head=head->next;
	}
	return 0;
}
int Population(struct node *head){
	int i=0;
	while(head) 
	{	head=head->next;
		i++;
	}
	return i; 
}
float Average(struct node *head){
	float s=0;
	struct node *p=head;
	while(p)
	{	s+=p->score;
		p=p->next;
	} 
	return s/Population(head); 
}
float Max(struct node *head){
 	float max=head->score;  
	while(head)
	{	if(head->score>max)max=head->score;
		head=head->next; 
	}	
	return max; 
} 
int NotPass(struct node*head){
		int i=0;
	while(head) 
	{	if(head->score<60.0000)
			i++;	
		head=head->next; 
	}
	return i; 
}	
void DeleteWhole(struct node *head){ 
	for(;head->next->next!=NULL;)
		DeleteLast(head);	
	free(head->next);
	free(head);		 
}
struct node *WriteFile(struct node*head){
	FILE *fp=fopen("Student_information.txt","w+"); 
	while(head)
	{	fprintf(fp,"%6d %9s   %6d   %6d   %6.2f\n",head->id,head->name,head->sex%2,head->age,head->score); 
		head=head->next; 
	} 
	fclose(fp); 
}
struct node *AddFile(struct node*head){      
	FILE *fp=fopen("Student_information.txt","a+");
	int del=0; 
	struct node *p=head,*t=(struct node *)malloc(sizeof(struct node));  
	int i,j;
	for(i=0;i<Population(head);i++,p=p->next)
	{	for(j=0;j<Population(head);j++)
		{	fscanf(fp,"%d%s %d%d%f\n",&t->id,t->name,&t->sex,&t->age,&t->score);
			if(p->id!=t->id)
				del++;
		}
		if(del!=Population(head))
			fprintf(fp,"%6d %9s   %6d   %6d   %6.2f\n",p->id,p->name,p->sex%2,p->age,p->score); 
		rewind(fp); 
	}
	free(t);
	fclose(fp); 
}
struct node *DeleteFile(struct node*head){
	FILE *fp=fopen("Student_information.txt","w+");
	fclose(fp); 
}
 
main(){
	int m1,m2,pos,id;
	struct node *head=NULL,*p;
	printf("*****һ���˵�*****\n0-�˳�����\n1-����ѧ����¼����\n2-��ӡȫ��ѧ����¼\n3-����һ���µ�ѧ����¼\n4-������ɾ��һ��ѧ����¼\n5-��ѧ�Ų���ѧ����¼\n6-ͳ��\n7-����ѧ������\n8-��ѧ����Ϣд������ļ�\n******************\n\n");
	while(1)
	{	printf("������˵�����:");
		scanf("%d",&m1);
		putchar('\n');
		switch(m1)
		{	case -1:printf("*****һ���˵�*****\n0-�˳�����\n1-����ѧ����¼����\n2-��ӡȫ��ѧ����¼\n3-����һ���µ�ѧ����¼\n4-������ɾ��һ��ѧ����¼\n5-��ѧ�Ų���ѧ����¼\n6-ͳ��\n7-����ѧ������\n8-��ѧ����Ϣд������ļ�\n******************\n\n");
					break;
			case 0: return 0;
			case 1: printf("****�����˵�1****\n1)ͷ�巨\n2)β�巨\n3)������ѧ����������\n4)��ѧ����Ϣ�ļ���������\n0)����һ���˵�\n******************\n");
					printf("����������˵�����:"); 
					scanf("%d",&m2);
					putchar('\n'); 
					switch(m2)
					{	case 0:break; 
						case 1:head=CreateListF();break;	
						case 2:head=CreateListR();break;
						case 3:head=CreateListO();break;
						case 4:head=ReadFile();break;
					}	break;
			case 2: PrintList(head);break;
			case 3: printf("****�����˵�3****\n1)��ָ��λ�����\n2)�����������в���\n0)����һ���˵�\n******************\n"); 
					printf("��������˵����У�");
					scanf("%d",&m2);
					putchar('\n'); 
					switch(m2)
					{	case 0:break;
						case 1: p=(struct node *)malloc(sizeof(struct node)); 
								printf("�����½��\n            [����][�Ա�][����][�ɼ�]\n[ѧ��]");
								scanf("%d %s %d%d%f",&p->id,p->name,&p->sex,&p->age,&p->score);
								printf("�����������λ�õ�λ�ã�"); 
								scanf("%d",&pos);
								head=InsertPos(head,p,pos); 
								break; 
						case 2: p=(struct node *)malloc(sizeof(struct node)); 
								printf("�����½��\n            [����][�Ա�][����][�ɼ�]\n[ѧ��]");
								scanf("%d %s %d%d%f",&p->id,p->name,&p->sex,&p->age,&p->score);
								head=InsertList(head,p);
								break;
					} 	break; 
			case 4: if(head==NULL) 
					{	printf("���ȴ�������\n");
						break;}
					printf("****�����˵�4****\n1)ɾ��ָ��λ�õļ�¼\n2)ɾ��ָ��ѧ�ŵļ�¼\n0)����һ���˵�\n******************\n");
					printf("��������˵����У�"); 
					scanf("%d",&m2);
					putchar('\n'); 
					switch(m2) 
					{	case 0: break;
						case 1: printf("��ɾ�������������λ�ã�"); 
								scanf("%d",&pos);
								head=DeletePos(head,pos);
								break;
						case 2: printf("����ָ��ѧ�ţ�");
								scanf("%d",&id);
								DeleteId(head,id);
								break;
					}   break;
			case 5: if(head==NULL) 
					{	printf("���ȴ�������\n");
						break;}
					printf("������Ҫ���ҵ�ѧ��:");
					scanf("%d",&id); 
					if(IdFind(head,id))
					{	printf("���ҵ�\n[ѧ��]    [����]   [�Ա�]   [����]   [�ɼ�]\n");
						printf("%6d %9s   %6d   %6d   %6.2f\n\n",IdFind(head,id)->id,IdFind(head,id)->name,IdFind(head,id)->sex%2,IdFind(head,id)->age,IdFind(head,id)->score);
					}
					else printf("δ�ҵ���ѧ��\n"); 
			case 6: if(head==NULL) 
					{	printf("���ȴ�������\n");
						break;}
					printf("****�����˵�6****\n1)ͳ��ѧ������\n2)ͳ��ѧ����ƽ���ɼ�����߷�\n3)ͳ�Ʋ���������\n0)����һ���˵�\n******************\n");
					printf("��������˵����У�"); 
					scanf("%d",&m2);
					putchar('\n'); 
					switch(m2)
					{  	case 0: break;
						case 1: printf("������������%d\n",Population(head)); 
								break;
						case 2: printf("ƽ����%6.2f����߷�%6.2f\n\n",Average(head),Max(head));
								break;
						case 3: printf("������������%d\n",NotPass(head)); 
								break;                   
					}   break;
			case 7: DeleteWhole(head);
					head=NULL; 
					break; 
			case 8:	printf("****�����˵�8****\n1)��дѧ���ļ�\n2)׷��ѧ���ļ�\n3)���ѧ���ļ�\n0)����һ���˵�\n******************\n"); 
			 		printf("��������˵����У�"); 
					scanf("%d",&m2);
					putchar('\n'); 
					switch(m2) 
					{   case 0:break;
						case 1:WriteFile(head);break;
						case 2:AddFile(head);break;
						case 3:DeleteFile(head);break; 
					} 	break;
			 case 9:order(head);break; 
		}
	}
} 
